# Medical Wearable Power Manager Design Package

## Purpose

RTOS power-management thread for a battery wearable that schedules sensor reads, enters deep sleep, and uses DMA for autonomous sampling.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/medical-wearable-power-manager` |
| Primary stack | C++17, C++ Design Patterns, SOLID, RTOS, Sleep states, DMA, Sensor sampling, Battery telemetry, Wake sources |
| Review proof point | Days-to-weeks runtime thinking, measurable sleep-current reduction, autonomous capture, and medical-device-grade power discipline. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
