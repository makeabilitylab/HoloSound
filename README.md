# HoloSound

## Table Of Contents

0. [Introduction](##Introduction)
1. [Prerequesites](##Prerequesites)
2. [Setup](##Setup)
3. [Support](##Support)
4. [Related work](##Related-work)

## Introduction
---

We introduce a HoloLens based system to provide
three key features to DHH users: automatic speech transcription, sound localization, and
sound identity.

[[Paper PDF](https://makeabilitylab.cs.washington.edu/media/publications/Guo_HolosoundCombiningSpeechAndSoundIdentificationForDeafOrHardOfHearingUsersOnAHeadMountedDisplay_POSTERASSETS2020.pdf)]

![System_overview](Figures/System_overview.jpg)

## Prerequesites
---
- Unity (2018.2.21f1)
- HoloLens 1

## Setup
---
Open `HoloSoundUnity` in Unity. Change build setting to UWP and use IL2CPP as backend. Build project and run it on HoloLens.

Open `Assets/CaptionController.cs` and change variables `SERVER_URL` and `SERVER_PORT` to the corresponding values of the sound recognition server. Instructions for the sound recognition server can be found at `SoundRecognitionServer/README.md`

## Support
---
Contact [Greg](mailto:grgrggtr@cs.washington.edu) or [Robin](mailto:yangy87@cs.washington.edu) @MakeabilityLab through email `grgrggtr@cs.washington.edu` and `yangy87@cs.washington.edu` 
Developed with [Dhruv Jain](https://homes.cs.washington.edu/~djain/) and collaborators at the [Makeability Lab](https://makeabilitylab.cs.washington.edu/)


## Related work
---
- [HomeSound](https://makeabilitylab.cs.washington.edu/project/smarthomedhh/): An Iterative Field Deployment of an In-Home Sound Awareness System for Deaf or Hard of Hearing Users