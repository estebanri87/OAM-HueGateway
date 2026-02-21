# This script is just a template and has to be copied and modified per project
# This script should be called from .vscode/tasks.json with
#
#   scripts/Build-Release.ps1            - for Beta builds
#   scripts/Build-Release.ps1 Release    - for Release builds
#
# {
#     "label": "Build-Release",
#     "type": "shell",
#     "command": "scripts/Build-Release.ps1 Release",
#     "args": [],
#     "problemMatcher": [],
#     "group": "test"
# },
# {
#     "label": "Build-Beta",
#     "type": "shell",
#     "command": "scripts/Build-Release.ps1 ",
#     "args": [],
#     "problemMatcher": [],
#     "group": "test"
# }



# set product names, allows mapping of (devel) name in Project to a more consistent name in release
# $settings = scripts/OpenKNX-Build-Settings.ps1

$scriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path
$projectRoot = Split-Path -Parent $scriptRoot

$reusableInProject = Join-Path $projectRoot "lib/OGM-Common/scripts/setup/reusable"
$reusableSibling = Join-Path (Split-Path -Parent $projectRoot) "OGM-Common/scripts/setup/reusable"

if (Test-Path $reusableInProject) {
	$reusablePath = $reusableInProject
} elseif (Test-Path $reusableSibling) {
	$reusablePath = $reusableSibling
} else {
	Write-Host "ERROR: Could not locate OGM-Common reusable scripts." -ForegroundColor Red
	Write-Host "Checked: $reusableInProject"
	Write-Host "Checked: $reusableSibling"
	exit 1
}

$gitDetected = $null
try {
	$gitDetected = & where.exe git 2>$null
} catch {
}

if ([string]::IsNullOrWhiteSpace($gitDetected)) {
	$gitCandidatePaths = @(
		"$env:LOCALAPPDATA\Programs\Git\cmd",
		"$env:LOCALAPPDATA\Programs\Git\bin",
		"$env:ProgramFiles\Git\cmd",
		"$env:ProgramFiles\Git\bin",
		"$env:ProgramFiles(x86)\Git\cmd",
		"$env:ProgramFiles(x86)\Git\bin"
	)

	foreach ($candidate in $gitCandidatePaths) {
		if ((Test-Path $candidate) -and (-not ($env:PATH -like "*$candidate*"))) {
			$env:PATH = "$candidate;$env:PATH"
		}
	}
}

# execute generic pre-build steps
& (Join-Path $reusablePath "Build-Release-Preprocess.ps1") $args[0]
if (!$?) { exit 1 }

# build firmware based on generated headerfile 
# the following build steps are project specific and must be adopted accordingly
# see comment in Build-Step.ps1 for argument description

# Example call, the following 2 lines might be there multiple times for each firmware which should be built
 #../OGM-Common/scripts/setup/reusable/Build-Step.ps1 release_REG1_ETH firmware-HueGateway-REG1-ETH uf2
 #if (!$?) { exit 1 }

 & (Join-Path $reusablePath "Build-Step.ps1") release_REG1_LAN_TP_BASE firmware-HueGateway-REG1-LAN-TP-Base esp32
 if (!$?) { exit 1 }

 #../OGM-Common/scripts/setup/reusable/Build-Step.ps1 release_REG1_LAN_BASE firmware-HueGateway-REG1-LAN-Base esp32
 #if (!$?) { exit 1 }

 #../OGM-Common/scripts/setup/reusable/Build-Step.ps1 release_Adafruit_Feather_ESP32_V2_TP firmware-HueGateway-Adafruit_Feather_ESP32_V2_TP esp32
 #if (!$?) { exit 1 }

 #../OGM-Common/scripts/setup/reusable/Build-Step.ps1 release_Adafruit_Feather_ESP32_V2_IP firmware-HueGateway-Adafruit_Feather_ESP32_V2_IP esp32
 #if (!$?) { exit 1 }

# execute generic post-build steps
& (Join-Path $reusablePath "Build-Release-Postprocess.ps1") $args[0]
if (!$?) { exit 1 }