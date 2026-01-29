# NowkOS-Installer
# 📥 NowkOS: The Multi-Kernel Deployment Suite
> **Version:** 1.0.0-PRO  
> **Build:** 2026.RT.01  
> **Status:** Operational / Stable

![C#](https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=c-sharp&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black)
![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Bash](https://img.shields.io/badge/Bash-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)

---

## 🛡️ Executive Summary
NowkOS is a sophisticated, multi-language framework designed for automated, bare-metal Operating System deployment. By leveraging the specific strengths of C#, C++, C, and Python, the suite provides a seamless transition from legacy environments to modern Windows or Linux kernels.

## ⚠️ CRITICAL WARNING & DISCLAIMER
This software is provided "as is". The deployment process involves low-level disk manipulation including:
- Re-partitioning of Master Boot Record (MBR) and GUID Partition Tables (GPT).
- Sector-level data overwriting.
- Kernel-level privilege escalation.
**"DATA LOSS IS PERMANENT. PROCEED ONLY IF YOU HAVE A VERIFIED BACKUP."**

---

## 🛠️ Technical Architecture
NowkOS-Installer/
### 1. The C# Integration Layer (The Brain)
The C# module acts as the Global Orchestrator. It handles:
- The Graphical User Interface (GUI) state machine.
- Conditional logic for OS selection.
- Safe-exit interlocks and confirmation prompts.
- Bridge communication between Python scripts and C++ binaries.

### 2. The C++ Optimization Engine (The Muscle)
Written in C++ for maximum execution speed:
- **Thread Priority:** Elevates the installer to `REALTIME_PRIORITY_CLASS`.
- **Memory Management:** Flushes system standby lists before heavy I/O.
- **Hardware Abstraction:** Queries SMBIOS for CPU/RAM validation.

### 3. The C Kernel Utilities (The Heart)
The C layer communicates directly with System APIs:
- Disk sector addressing.
- Buffer management for file extraction.
- Low-level calls to `dism.exe` (Windows) or `dd` (Linux).

### 4. The Python Data Layer (The Sentinel)
Python manages the abstract logic:
- Network Handshake: Verifies repository integrity.
- Data Migration: Securely parses user profiles and system configs.
- JSON-based configuration management.

---

### 📂 Project Structure

* **build/**: Compiled binaries and ready-to-run executables.
* **core/**: The heart of NowkOS (C#, C++, and C source files).
* **interface/**: UI elements and graphical modules.
* **modules/**: Python automation, data migration, and helper scripts.

## 🚀 Deployment Pipeline (Logic Flow)

1. **INITIALIZATION PHASE**
   - System calls `CheckHardware.exe` (C++).
   - Validation of 64-bit architecture and Secure Boot status.

2. **USER INTERACTION PHASE**
   - Launching `NowkOS_GUI.py` (Python/Tkinter).
   - Displaying System Selector (C#).

3. **PRE-INSTALLATION OPTIMIZATION**
   - `InstallOptimizer.cpp` (C++) triggers.
   - Background processes are throttled.
   - Disk buffers are allocated.

4. **CORE DEPLOYMENT**
   - `nowk_installer.c` (C) begins partition wiping.
   - Stream extraction of `.wim` or `.img` files.

5. **POST-INSTALLATION HANDOFF**
   - Windows: `win_setup.ps1` removes telemetry.
   - Linux: `linux_setup.sh` configures GRUB and Repos.

---

## 📊 Comparison of Supported Systems

| Operating System | Language Target | Method |
| :--- | :--- | :--- |
| Windows 11 | C#/C | WIM Image Apply |
| Windows 10 | C#/C | WIM Image Apply |
| Windows 7 | C | Legacy Image Deploy |
| Arch Linux | Bash/C | Pacstrap / DD |
| Ubuntu | Bash/C | Deb-Installer |
| OpenSUSE | Bash | Zypper/Image |

---

## 📝 MIT License Implementation

Copyright (c) 2026 NOWK OS DEVELOPMENT TEAM

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

---

## 🛠 Advanced Developer Notes
- **Compiling:** Use `cmake` for C/C++ modules.
- **GUI:** Requires `pip install customtkinter`.
- **Permissions:** Must run with NT AUTHORITY\SYSTEM or Root.



---

## 📜 LEGAL TERMINOLOGY & COMPLIANCE

This software is protected under international copyright laws and the open-source community guidelines. By executing any module of the **NowkOS Installer Suite**, you agree to the terms of the MIT License. Any redistribution of the core C/C++ binaries must include the original author's attribution.

### 🛡️ SECURITY ADVISORY
The NowkOS Team is not responsible for hardware failure, data corruption, or "bricked" devices resulting from the misuse of the low-level C utilities.



---
⚖️ GNU GENERAL PUBLIC LICENSE (GPL v3)
Este software é um software livre: você pode redistribuí-lo e/ou modificá-lo sob os termos da Licença Pública Geral GNU conforme publicada pela Free Software Foundation, seja a versão 3 da Licença, ou qualquer versão posterior.

Regras de Atribuição:

Instalação: Totalmente livre para o usuário final.

Derivados: Se este código for usado em outro instalador, o nome do criador original (NowkOS) deve permanecer intacto e visível.

Reciprocidade: Qualquer melhoria feita por terceiros deve ser compartilhada com a comunidade, mantendo o autor original nos créditos.

FINAL DOCUMENTATION LINE: LICENSA: GNU GENERAL PUBLIC LICENSE v3 - COPYLEFT (C) 2026 NOWK OS
---
final
