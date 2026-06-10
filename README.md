# Medical Wearable Power Manager

RTOS power-management thread for a battery wearable that schedules sensor reads, enters deep sleep, and uses DMA for autonomous sampling.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- RTOS
- Sleep states
- DMA
- Sensor sampling
- Battery telemetry
- Wake sources

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/medical_wearable_power_manager
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Days-to-weeks runtime thinking, measurable sleep-current reduction, autonomous capture, and medical-device-grade power discipline.

## Remote

Intended public repository: https://github.com/rheslar1/medical-wearable-power-manager
