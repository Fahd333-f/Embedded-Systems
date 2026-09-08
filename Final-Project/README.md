# Student Database (SDB) Project

## Overview
This project is a modular Student Database system implemented in C. It allows users to efficiently manage student records using a static array within a structured, multi-file architecture, implementing clean memory management and duplicate prevention.

## Demonstration Video
You can watch the full project demonstration and code walkthrough here:
- **[Watch the Project Video on Google Drive](https://drive.google.com/drive/folders/1XeESFRl_MO8zfboXC7HTOAQMCLmGYZEs?usp=sharing)**

## Architecture & Features
- **Modular Programming:** Separated into backend logic (`SDB.c`), frontend UI (`SDBAPP.c`), and header definitions.
- **Memory Management:** Implements a shifting algorithm during deletion to prevent memory fragmentation and maintain contiguous data.
- **Data Integrity:** Includes strict validation to prevent duplicate IDs.

## How to Run
1. Compile the project using GCC:
   ```cmd
   gcc main.c SDB.c SDBAPP.c -o project