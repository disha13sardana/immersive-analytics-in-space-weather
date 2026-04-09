# Immersive Analytics in Space Weather

☀️ **Heliospheric & Geomagnetic Data Visualization in an Immersive Mixed Reality Environment**

A mixed reality visualization and sonification system built with Unity and Microsoft HoloLens 2 that enables embodied, multimodal interaction with pre-processed space weather data. The system combines visual analytics with spatial audio to study how sonification affects data understanding and pattern-finding in an immersive environment.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Project Lineage](#project-lineage)
- [Features](#features)
- [Technology Stack](#technology-stack)
- [System Requirements](#system-requirements)
- [Installation](#installation)
- [Dataset](#dataset)
- [Usage Guide](#usage-guide)
- [Interaction Methods](#interaction-methods)
- [Project Structure](#project-structure)
- [Troubleshooting](#troubleshooting)
- [Contributing](#contributing)
- [Publications](#publications)
- [License](#license)
- [Authors](#authors)
- [Useful Links](#useful-links)
- [Acknowledgements](#acknowledgements)

---

## 🎯 Overview

Space weather, driven by solar wind, coronal mass ejections (CMEs), and geomagnetic storms, has real consequences for satellites, power grids, aviation, and astronaut safety. Yet the datasets describing these phenomena are dense, multi-dimensional, and rarely accessible in an intuitive form.

**Immersive Analytics in Space Weather** is a research prototype that brings space weather data into Mixed Reality and augments it with sonification, the use of non-speech audio to convey information. The system was used in a between-subject user study with 50 participants comparing audio-visual and visual-only scenarios, and was separately evaluated by 42 space weather domain experts at a space weather conference.

Built for the **Microsoft HoloLens 2**, this system allows users to:

- **Walk around data** anchored in physical space
- **Manipulate visualizations** using hand gestures and a spatial slicing plane
- **Control views** through voice commands
- **Hear the data** through spatially rendered audio mapped to geomagnetic storm data
- **Explore temporal dynamics** via a spatial time-slicing interface
- **Load and explore** pre-processed datasets covering solar storm intensity, solar activity level, and ionospheric total electron content

Unlike traditional desktop-based space weather dashboards, this system leverages embodied spatial cognition to make complex multi-variate data approachable for researchers, educators, and mission planners alike.

---

## 🔗 Project Lineage

This project is a domain adaptation of **[Immersive Analytics in Disaster Response](https://github.com/disha13sardana/immersive-analytics-in-disaster-response)**, which applied immersive MR visualization techniques to the IEEE VAST Challenge 2019 earthquake dataset. That project established the foundational architecture: Unity-based MR scene management, multiple coordinated views, spatial interaction patterns, and multimodal data-driven rendering. That architecture has been extended and re-targeted here for space weather science.

```
immersive-analytics-in-disaster-response   ──▶   immersive-analytics-in-space-weather
     (IEEE VAST 2019 earthquake data)                (heliospheric & geomagnetic data)
        HoloLens 2 • MRTK • Unity                      HoloLens 2 • MRTK • Unity
```

### Key Adaptations for the Space Weather Domain

| Component | Disaster Response | Space Weather |
|---|---|---|
| **Data Layer** | VAST 2019 CSV incident reports | Pre-processed SYM-H, sunspot number, and TEC CSV files |
| **Visual Encoding** | Damage severity, resource locations | Storm intensity (SYM-H), solar activity (sunspot number), ionospheric TEC |
| **Scene Environment** | St. Himark city map (terrestrial) | Perpendicular line-plot layout with data spheres |
| **Temporal Scale** | Hours (earthquake response window) | Hours to days (storm event timelines) |
| **MR Platform** | HoloLens 2 (primary) | HoloLens 2 |

If you are building a new domain adaptation, the disaster response repository is the recommended starting point.

---

## ✨ Features

### Data Parameters Supported

- **SYM-H Index**: Measures solar storm intensity; a more negative value indicates a more intense geomagnetic storm
- **Sunspot Number**: An empirically measured proxy for overall solar activity level, sourced from NOAA SWPC
- **Total Electron Content (TEC)**: Measures the total number of electrons in the ionosphere along a transmitter-to-receiver path; used to study space weather impacts on GPS and radio communications

  <img width="537" height="302" alt="tvcg-mr-1" align="center" src="https://github.com/user-attachments/assets/734e52a8-f387-495f-b9e0-024697a06563" />

### Core Visualization Capabilities

- **Perpendicular Coordinated Views**: SYM-H index line plot and solar activity level plot placed orthogonally, adding a spatial dimension to traditionally 2D data
- **Data Spheres**: Visual markers on the solar activity plot indicating the presence and intensity of each geomagnetic storm; sphere size is mapped to the minimum SYM-H value
- **Temporal Navigation via Slicing Plane**: A spatial slicing plane for exploring storm event progression that the user drags along the time axis to read SYM-H values at any timestamp; in another Task, the plane changes color to indicate day (yellow) and night (blue) via the terminator effect
- **Dataset Navigation**: Users cycle through nine storm datasets using a "Change dataset" button, with the visualization updating in place
- **Multi-parameter Display**: Simultaneous display of SYM-H index, solar activity level, and delta TEC values across nine storm events

<img width="2260" height="1224" alt="two-line-plots copy" src="https://github.com/user-attachments/assets/fac11ee1-012d-4ead-9c9d-5126376f24e2" />

### Sonification (Audio Encoding)

Sonification is a core feature of this system. Three types of audio are used, all spatially rendered using the **Unity Head-Related Transfer Function (HRTF)**:

- **Context-based audio**: A fire-crackling sound attached to the solar activity level plot. The amplitude of the sound is linearly mapped to the storm intensity (minimum SYM-H value), giving auditory context to the solar activity data.

- **Action-based audio**: A triangle wave sound associated with the interactive slicing plane. As the user drags the slicing plane across the delta TEC time-series plot, the pitch changes in proportion to the delta TEC value at each timestamp. Pitch is mapped between 110 Hz (A2) and 440 Hz (A4) using a semitone-based formula.

- **Event-based audio**: Two natural sounds mark the sunrise and sunset terminators as the user sweeps the slicing plane across the data. A rooster sound indicates sunrise; cicadas indicate sunset. These natural sounds required minimal training.

Concurrent sounds were avoided. All audio samples were processed (mono conversion, fade-in/fade-out, and normalized to 0 dB) using Audacity.

---

## 🛠️ Technology Stack

| Component | Technology |
|---|---|
| MR Platform | Microsoft HoloLens 2 |
| Engine | Unity |
| Primary Language | C++ / C |
| Scripting | C# |
| MR Framework | Mixed Reality Toolkit (MRTK) |
| Rendering | GLSL / ShaderLab (custom shaders) |
| Spatial Audio | Unity HRTF (Head-Related Transfer Function) |
| Audio Processing | Audacity (pre-processing of sound samples) |
| Cross-Device | OpenXR Plugin |
| IDE Support | Visual Studio / JetBrains Rider |

---

## 💻 System Requirements

### For Development

#### Hardware

- **Development PC**:
  - Windows 10 (version 1903 or higher)
  - 64-bit processor
  - 16+ GB RAM
  - DirectX 11 compatible GPU
  - USB 3.0 port

- **MR Headset**: Microsoft HoloLens 2

#### Software

- **Unity**: check `ProjectSettings/ProjectVersion.txt` for the exact version used (Unity 2020 LTS or newer recommended)
- **Visual Studio 2019** or later with:
  - Universal Windows Platform development workload (for HoloLens)
  - Game development with Unity workload
  - Windows 10 SDK (10.0.18362.0 or later)
- **MR Platform SDK**:
  - [Mixed Reality Toolkit (MRTK) 2.7+](https://github.com/microsoft/MixedRealityToolkit-Unity/releases) for HoloLens 2
- **OpenXR Plugin** (via Unity Package Manager) for cross-device support
- **Windows Device Portal** (for HoloLens deployment)

### For Deployment / Usage

- Microsoft HoloLens 2 with Windows Holographic OS
- Optional: Desktop PC for editor-based testing with MR simulation

---

## 📦 Installation

### Step 1: Clone the Repository

```bash
git clone https://github.com/disha13sardana/immersive-analytics-in-space-weather.git
cd immersive-analytics-in-space-weather
```

### Step 2: Install Unity

1. Install **Unity Hub** from [unity.com/download](https://unity.com/download)
2. Open `ProjectSettings/ProjectVersion.txt` to confirm the required Unity version
3. Install that version through Unity Hub, including:
   - **Universal Windows Platform Build Support**
   - **Windows Build Support (IL2CPP)**

### Step 3: Install Visual Studio

1. Download **Visual Studio 2019 Community** or later
2. During installation, select:
   - **Universal Windows Platform development**
   - **Game development with Unity**
3. Install **Windows 10 SDK (10.0.18362.0 or later)**

### Step 4: Install MRTK

1. Download **MRTK 2.7+** from the [MRTK releases page](https://github.com/microsoft/MixedRealityToolkit-Unity/releases)
2. Import into Unity:
   ```
   Microsoft.MixedReality.Toolkit.Unity.Foundation.unitypackage
   Microsoft.MixedReality.Toolkit.Unity.Extensions.unitypackage
   ```

### Step 5: Open the Project in Unity

1. Launch **Unity Hub**
2. Click **Add → Add project from disk**
3. Select the cloned repository folder
4. Open with the correct Unity version
5. Wait for Unity to import all assets (may take several minutes on first open)

### Step 6: Install Package Dependencies

Unity will automatically resolve packages listed in `Packages/manifest.json`. If any packages fail to resolve:

1. Go to **Window → Package Manager**
2. Verify all required packages are installed
3. If the OpenXR plugin is missing, install it via the Package Manager

### Step 7: Configure Build Settings

1. Go to **File → Build Settings → Universal Windows Platform**
2. Click **Switch Platform**
3. Set:
   - **Target Device**: HoloLens
   - **Architecture**: ARM64
   - **Build Type**: D3D Project
   - **Minimum Platform Version**: 10.0.18362.0

### Step 8: Configure MRTK

1. In Unity menu, select **Mixed Reality Toolkit → Configure**
2. Apply the MRTK HoloLens 2 configuration profile
3. Ensure your scene has:
   - **MixedRealityToolkit** component
   - **MixedRealityPlayspace** for camera setup

### Step 9: Open the Main Scene

1. In the Unity Editor, navigate to `Assets/Scenes/`
2. Open the primary scene file
3. Press **Play** to run in the editor with MR simulation

---

## 📊 Dataset

All data is pre-processed separately and stored locally before loading into the application. Place pre-processed files in:

```
Assets/Resources/Data/SpaceWeather/
```

---

### Dataset 1: SYM-H Index (Solar Storm Intensity)

The SYM-H index measures the intensity of a solar storm. More negative values correspond to more intense geomagnetic storms. The dataset covers storm events plotted over 48-hour durations.

**Source:** [Kyoto World Data Center for Geomagnetism](https://wdc.kugi.kyoto-u.ac.jp/)

**File location:**
```
Assets/Resources/Data/SpaceWeather/SYMH/
```

**Expected CSV format after pre-processing:**
```csv
timestamp,sym_h_nT
2003-10-29T00:00:00Z,-14
2003-10-29T00:01:00Z,-17
2003-10-29T00:02:00Z,-21
```

---

### Dataset 2: Sunspot Number (Solar Activity Level)

The sunspot number is an empirically measured proxy for overall solar activity level, used here to provide context for the timing and intensity of geomagnetic storms.

**Source:** [NOAA Space Weather Prediction Center (SWPC)](https://www.swpc.noaa.gov/products/solar-cycle-progression)

**File location:**
```
Assets/Resources/Data/SpaceWeather/Sunspot/
```

**Expected CSV format after pre-processing:**
```csv
date,sunspot_number
2003-10-29,200
2003-10-30,185
2003-10-31,172
```

---

### Dataset 3: Total Electron Content (TEC)

Delta TEC values for nine storms from the **High-West (HW) sector of the U.S.**, selected for their clear correlation between the sunrise terminator and minimum delta TEC. Only storms with an onset time before noon (UT) are included. Data pre-processing and delta TEC computation follow the methodology described in Debchoudhury et al. (dataset available at Zenodo: [10.5281/zenodo.3762758](https://doi.org/10.5281/zenodo.3762758)). Sunrise and sunset times were calculated using the [NOAA Sunrise/Sunset Calculator](https://gml.noaa.gov/grad/solcalc/sunrise.html).

**File location:**
```
Assets/Resources/Data/SpaceWeather/TEC/
```

**Expected CSV format after pre-processing:**
```csv
timestamp,latitude,longitude,delta_tec_TECU,sunrise_terminator_ut
2003-10-29T06:00:00Z,40.5,-105.1,-2.3,06:15
2003-10-29T06:01:00Z,40.5,-105.1,-2.7,06:15
```

---

### Pre-processing

Data pre-processing is handled separately before loading into the application. The pre-processing pipeline is not part of this repository. Processed files should be placed in the appropriate subdirectory under `Assets/Resources/Data/SpaceWeather/` before running the application.

> **Note:** Data source configuration (file paths) is managed in the app settings scripts. See inline comments in `App/` for details.

---

## 🎮 Usage Guide

### Running in the Unity Editor (Play Mode)

1. **Open the Main Scene**:
   ```
   Assets/Scenes/MainVisualization.unity
   ```

2. **Enable MR Simulation**:
   - Enable the **MRTK Input Simulation Service** for keyboard/mouse control in the editor

3. **Keyboard Controls in Play Mode (MRTK)**:
   - **W/A/S/D**: Move camera
   - **Q/E**: Move up/down
   - **Right Mouse + Drag**: Rotate view
   - **Left Mouse**: Simulate hand interaction
   - **Space**: Simulate air tap
   - **Tab**: Toggle input simulation panel

4. **Press Play** to start the visualization

### Deploying to HoloLens

#### Method 1: USB Deployment (Recommended for Development)

1. **Build the Unity Project**:
   - File → Build Settings → **Build**
   - Select an output folder (e.g., `Builds/HoloLens`)

2. **Open in Visual Studio**:
   - Navigate to the build folder
   - Open the `.sln` file

3. **Deploy to Device**:
   - Connect HoloLens via USB
   - Set configuration: **Release / ARM64 / Device**
   - Click **Debug → Start Without Debugging** (Ctrl+F5)

> **Note:** First deployment may take 10–15 minutes. Subsequent deployments are significantly faster.

#### Method 2: Wi-Fi Deployment

1. Enable **Developer Mode** on HoloLens: Settings → Update & Security → For Developers
2. Get the HoloLens IP address (Settings → Network → Wi-Fi → Hardware properties)
3. In Visual Studio, set target to **Remote Machine** and enter the IP
4. Set authentication to **Universal (Unencrypted Protocol)** and deploy

---

## 👋 Interaction Methods

### Hand Gesture Controls

#### Time Navigation

- **Slicing Plane**: Grab the temporal slicing plane and move your hand forward or backward to advance or rewind through the space weather event timeline

#### Data Selection

- **Grab and Move**: Open hand near a visualization → close fingers to grab → move to reposition in MR space
- **Air Tap**: Point at a data object and pinch fingers to select and inspect it
- **Far Interaction**: Use the hand ray to interact with distant objects in the scene

### Voice Commands

Voice interaction is implemented via MRTK's Speech Input system. The following commands are supported in the application:

- **"Change dataset"**: Cycles to the next storm event in the sequence
- **"Reset"**: Returns the slicing plane to its default position

> **For developers:** To add or modify voice commands, update the `SpeechCommandsProfile` in the MRTK configuration and the corresponding handlers in `VoiceCommandManager.cs`.

---

## 📁 Project Structure

```
immersive-analytics-in-space-weather/
│
├── App/
│   ├── Scripts/
│   │   ├── DataProcessing/
│   │   │   ├── SYMHLoader.cs              # SYM-H CSV ingestion
│   │   │   ├── SunspotLoader.cs           # Sunspot number CSV ingestion
│   │   │   ├── TECLoader.cs               # Delta TEC CSV ingestion
│   │   │   └── TemporalIndexer.cs         # Time series indexing
│   │   │
│   │   ├── Visualization/
│   │   │   ├── SYMHPlot.cs                # SYM-H time series line plot
│   │   │   ├── SolarActivityPlot.cs       # Sunspot number plot with data spheres
│   │   │   ├── TECPlot.cs                 # Delta TEC time series plot
│   │   │   ├── DataSphere.cs              # Storm intensity sphere rendering
│   │   │   └── SlicingPlane.cs            # Temporal navigation plane
│   │   │
│   │   ├── Sonification/
│   │   │   ├── ContextAudio.cs            # Fire-crackling amplitude mapping
│   │   │   ├── ActionAudio.cs             # Triangle wave pitch mapping for TEC
│   │   │   └── EventAudio.cs              # Rooster/cicada sunrise/sunset triggers
│   │   │
│   │   ├── Interaction/
│   │   │   ├── GestureHandler.cs          # Point-and-pinch gesture processing
│   │   │   ├── VoiceCommandManager.cs     # Speech recognition (MRTK)
│   │   │   └── DatasetNavigator.cs        # Change dataset button logic
│   │   │
│   │   └── Utilities/
│   │       ├── ColorScale.cs              # Color encoding for slicing plane
│   │       └── TimeController.cs          # Time progression and indexing
│
├── Assets/
│   ├── Scenes/
│   │   ├── MainVisualization.unity        # Primary MR scene (Task 1: SYM-H + Solar Activity)
│   │   ├── TECVisualization.unity         # TEC scene (Task 2: delta TEC + terminator)
│   │   └── CalibrationScene.unity         # Device calibration
│   │
│   ├── Audio/
│   │   ├── fire_crackling.wav             # Context audio (solar activity plot)
│   │   ├── triangle_wave.wav              # Action audio (slicing plane / TEC)
│   │   ├── rooster.wav                    # Event audio (sunrise terminator)
│   │   └── cicadas.wav                    # Event audio (sunset terminator)
│   │
│   ├── Materials/
│   │   ├── SlicingPlaneMaterial.mat       # Day/night color transition material
│   │   ├── DataSphereMaterial.mat         # Storm intensity sphere material
│   │   └── HolographicMaterial.mat        # MR-optimized base material
│   │
│   ├── Prefabs/
│   │   ├── SYMHPlotView.prefab
│   │   ├── SolarActivityView.prefab
│   │   ├── TECPlotView.prefab
│   │   ├── DataSphere.prefab
│   │   └── UI/
│   │       ├── ControlPanel.prefab
│   │       └── ChangeDatasetButton.prefab
│   │
│   ├── Resources/
│   │   └── Data/
│   │       └── SpaceWeather/
│   │           ├── SYMH/                  # SYM-H index CSV files (one per storm)
│   │           ├── Sunspot/               # Sunspot number CSV file
│   │           └── TEC/                   # Delta TEC CSV files (one per storm)
│   │
│   └── Shaders/
│       └── DataVisualization.shader       # Custom data encoding shaders
│
├── Packages/
│   ├── manifest.json                      # Package dependencies
│   └── packages-lock.json
│
├── ProjectSettings/                       # Unity project configuration
├── .vscode/                               # VS Code editor settings
├── .idea/                                 # JetBrains Rider IDE settings
├── .gitignore
└── README.md
```

---

## 🐛 Troubleshooting

### Build Errors

**Problem**: `UnityEditor` namespace not found
```
Solution:
Ensure files using UnityEditor are in Editor/ folders
or wrapped in #if UNITY_EDITOR directives.
```

**Problem**: Failed to build app bundle
```
Solution:
1. Use IL2CPP backend, not .NET
2. Update Windows 10 SDK and rebuild in Visual Studio
3. Clean solution and rebuild in Visual Studio
```

---

### Deployment Issues

**Problem**: Cannot connect to HoloLens via USB
```
Solution:
1. Enable Developer Mode: Settings → Update & Security → For Developers
2. Update USB drivers on PC
3. Use USB 3.0 port
4. Pair device in Windows Device Portal (https://[HoloLens-IP])
```

**Problem**: App crashes on startup on device
```
Solution:
1. Verify ARM64 build configuration (HoloLens 2)
2. Check InternetClient capability is enabled in Package.appxmanifest
3. Review Visual Studio output for DLL loading errors
```

---

### MRTK / MR Framework Issues

**Problem**: Hand tracking not working on HoloLens
```
Solution:
1. Verify hand tracking is enabled in the MRTK configuration profile
2. Confirm MixedRealityToolkit component is present in the scene
3. Calibrate hand tracking on HoloLens: Settings → System → Calibration
```

**Problem**: Voice commands not recognized
```
Solution:
1. Enable Microphone capability in Unity Player Settings
2. Train speech recognition on the device
3. Speak at a normal pace in a quiet environment
4. Check SpeechCommandsProfile in the MRTK configuration
```

---

### Data Issues

**Problem**: CSV file not parsing correctly
```
Solution:
1. Confirm the file uses UTF-8 encoding (without BOM)
2. Check that column headers match exactly what the loader script expects
3. Look for missing values or malformed rows and clean them in pre-processing
```

**Problem**: SYM-H or sunspot values reading as null
```
Solution:
1. Check for missing-value placeholders (e.g. 9999 or -999) left over from raw data
2. Ensure these are replaced or removed during pre-processing before loading
3. Verify the value column is numeric and not imported as a string
```

**Problem**: Timestamps not recognized
```
Solution:
1. Ensure timestamps are in ISO 8601 UTC format: 2003-10-29T06:00:00Z
2. Check for BOM characters at the start of the file (use UTF-8 without BOM)
3. Verify date and time are in a single column, not split across two columns
```

---

## 🤝 Contributing

Contributions from the research community are welcome, whether that's new visualization types, additional data source connectors, interaction improvements, or MR platform support.

### Reporting Issues

1. Check existing issues before opening a new one
2. Provide a detailed description and steps to reproduce
3. Include error messages, Unity console output, and device logs
4. Specify Unity version, MR headset model, OS version, and MRTK version

### Pull Requests

1. Fork the repository
2. Create a feature branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Follow coding conventions:
   - Meaningful variable and method names
   - XML documentation for all public APIs
   - Microsoft C# Coding Conventions
4. Test on MR hardware when possible; note the device used in your PR if not HoloLens 2
5. Commit with clear messages:
   ```bash
   git commit -m "Add: pitch mapping for SYM-H sonification"
   ```
6. Push and open a Pull Request including:
   - Description of changes
   - Screenshots or video if the change affects the MR scene
   - Testing notes and device used

### Development Guidelines

- **Code Style**: Microsoft C# Coding Conventions
- **Documentation**: XML doc comments on all public methods
- **Testing**: Test on physical MR hardware when possible; specify device in PR if alternate hardware used
- **Scientific Accuracy**: Coordinate transformations and data encoding should be physically meaningful; link to sources or papers where relevant

---

## 📄 Publications

This repository is the codebase for the following research. If you use this code in your research, please cite:

**Sardana, Disha, Lee Lisle, Denis Gračanin, Ivica Ico Bukvic, Krešimir Matković, and Gregory Earle. (2025)**
*"Evaluating the Impact of Sonification in an Immersive Analytics Environment Using Real-World Geophysical Datasets."*
In 2025 IEEE Conference on Virtual Reality and 3D User Interfaces Abstracts and Workshops (VRW), pp. 1224-1225. IEEE, 2025.
[https://ieeexplore.ieee.org/abstract/document/10972487](https://ieeexplore.ieee.org/abstract/document/10972487)

**Sardana, D., Kahaliya, S., Earle, G., & Gracanin, D. (2025)**
*"Embodied Exploration of Space Weather Datasets in a Mixed Reality Environment."*
Authorea Preprints.

**Sardana, D. (2023)**
*"Embodied Data Exploration in Immersive Environments: Application in Geophysical Data Analysis"*
Doctoral Dissertation, Virginia Tech.
[Available on VTechWorks](https://vtechworks.lib.vt.edu/items/6f22f081-e3ae-4ce6-a128-70c4dd23e5bb)

### Citation (BibTeX)

```bibtex
@inproceedings{sardana2025evaluating,
  title={Evaluating the Impact of Sonification in an Immersive Analytics Environment Using Real-World Geophysical Datasets},
  author={Sardana, Disha and Lisle, Lee and Gra{\v{c}}anin, Denis and Bukvic, Ivica Ico and Matkovi{\'c}, Kre{\v{s}}imir and Earle, Gregory},
  booktitle={2025 IEEE Conference on Virtual Reality and 3D User Interfaces Abstracts and Workshops (VRW)},
  pages={1224--1225},
  year={2025},
  organization={IEEE}
}

@article{sardana2025embodied,
  title={Embodied Exploration of Space Weather Datasets in a Mixed Reality Environment},
  author={Sardana, Disha and Kahaliya, Sarthak and Earle, Gregory and Gracanin, Denis},
  journal={Authorea Preprints},
  year={2025},
  publisher={Authorea}
}

@phdthesis{sardana2023embodied,
  title={Embodied Data Exploration in Immersive Environments:
         Application in Geophysical Data Analysis},
  author={Sardana, Disha},
  year={2023},
  school={Virginia Tech}
}
```

---

## 📄 License

**Code License**: MIT License
Copyright (c) 2026 Disha Sardana

**Data Licenses**:
- **SYM-H Index**: Data provided by the World Data Center for Geomagnetism, Kyoto. Proper acknowledgment of the data source is requested when publishing results.
- **Sunspot Number**: Data sourced from NOAA Space Weather Prediction Center (SWPC), a U.S. government public data resource.
- **TEC data**: Pre-processed following the methodology of Debchoudhury et al. Dataset available at Zenodo: [10.5281/zenodo.3762758](https://doi.org/10.5281/zenodo.3762758)

When using this work, please cite the publications above.

---

## 👤 Authors

**Disha Sardana**
- GitHub: [@disha13sardana](https://github.com/disha13sardana)
- ORCID: [0000-0002-0137-4982](https://orcid.org/0000-0002-0137-4982)

**Contributors**:
- Sarthak Kahaliya, ORCID: [0009-0006-6205-2107](https://orcid.org/0009-0006-6205-2107)
- Denis Gračanin, ORCID: [0000-0001-6831-2818](https://orcid.org/0000-0001-6831-2818)

---

## 🔗 Useful Links

### Project Resources

- Upstream Project: [Immersive Analytics in Disaster Response](https://github.com/disha13sardana/immersive-analytics-in-disaster-response)
- Demo Video 1: [YouTube: Embodied Exploration of Space Weather Datasets in a Mixed Reality Environment](https://youtu.be/HWLhlNNdxuc?si=o0hdPao2WiD_4u7O)
- Demo Video 2: [YouTube: Immersive Space Weather Analytics](https://youtu.be/I5uS5VoExmM?si=tiNanPoTpi-pMvOS)

### Data Sources

- Kyoto WDC for Geomagnetism (SYM-H): [wdc.kugi.kyoto-u.ac.jp](https://wdc.kugi.kyoto-u.ac.jp/)
- NOAA SWPC Solar Cycle Progression (Sunspot Number): [swpc.noaa.gov/products/solar-cycle-progression](https://www.swpc.noaa.gov/products/solar-cycle-progression)
- NOAA Sunrise/Sunset Calculator (TEC storm selection): [gml.noaa.gov/grad/solcalc/sunrise.html](https://gml.noaa.gov/grad/solcalc/sunrise.html)

### Development Resources

- Microsoft HoloLens Documentation: [docs.microsoft.com/hololens](https://docs.microsoft.com/hololens/)
- Mixed Reality Toolkit (MRTK): [github.com/microsoft/MixedRealityToolkit-Unity](https://github.com/microsoft/MixedRealityToolkit-Unity)
- Unity for HoloLens: [learn.microsoft.com/windows/mixed-reality/develop/unity](https://learn.microsoft.com/windows/mixed-reality/develop/unity/unity-development-overview)
- HoloLens 2 Tutorials: [Microsoft Learn](https://learn.microsoft.com/training/paths/beginner-hololens-2-tutorials/)
- Immersive Analytics Community: [immersiveanalytics.net](https://immersiveanalytics.net/)

---

## 🙏 Acknowledgements

- **Debchoudhury et al.** for the TEC pre-processed datasets, this work builds upon
- **Visual Analytics and Immersive Analytics research communities** for foundational work, this builds upon
- **Virginia Tech ICAT** for research support and facilities: [icat.vt.edu](https://icat.vt.edu/)
- All contributors and participants who helped develop and evaluate this system

---

> **Note**: This is a research prototype developed to explore novel interaction techniques for scientific data exploration in MR. While functional, it may require adaptation for production or operational use cases.

**Last Updated**: 2026
**Version**: 1.0.0
