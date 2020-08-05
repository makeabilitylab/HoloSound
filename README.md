# HoloSound

Introduction
---

We introduce a HoloLens based system to provide
three key features to DHH users: automatic speech transcription, sound localization, and
sound identity.

[[Paper PDF](https://makeabilitylab.cs.washington.edu/media/publications/Guo_HolosoundCombiningSpeechAndSoundIdentificationForDeafOrHardOfHearingUsersOnAHeadMountedDisplay_POSTERASSETS2020.pdf)]

![System_overview](Figures/System_overview.jpg)

## Table Of Contents ##

- [HoloSound](#holosound)
  - [Introduction](#introduction)
  - [Table Of Contents](#table-of-contents)
  - [## Prerequesites](#h2-idprerequesites-412prerequesitesh2)
  - [Setup](#setup)
  - [Acknowledgement](#acknowledgement)
  - [Support](#support)

## Prerequesites ##
--------------
- Unity (2018.2.21f1)
- HoloLens 1

## Setup ##

Open `HoloSoundUnity` in Unity. Change build setting to UWP and use IL2CPP as backend. Build project and run it on HoloLens.

Open `Assets/CaptionController.cs` and change variables `SERVER_URL` and `SERVER_PORT` to the corresponding values of the sound recognition server. Instructions for the sound recognition server can be found at `SoundRecognitionServer/README.md`

## Acknowledgement ##



## Support ##
Contact [Greg](grgrggtr@cs.washington.edu) or [Robin](yangy87@cs.washington.edu) @MakeabilityLab through email `grgrggtr@cs.washington.edu` and `yangy87@cs.washington.edu` 
Developed with [Dhruv Jain](https://homes.cs.washington.edu/~djain/) and collaborators at the [Makeability Lab](https://makeabilitylab.cs.washington.edu/)




In progress...