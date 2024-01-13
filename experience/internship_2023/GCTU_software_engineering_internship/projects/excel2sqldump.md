# XLSX to SQL Dump Converter

## Project Overview

As part of my Software Engineering Internship at GCTU, I initiated a project to automate the conversion of newly admitted student data from Excel (XLSX) format to SQL dump format. The primary goal was to streamline and eliminate manual efforts in the data processing workflow.

## Key Achievements

- Automated the conversion of newly admitted student data from Excel to SQL dump format.
- Developed a solution to address manual data processing challenges and improve efficiency.
- Introduced mappings for programs, nationality, and gender to align with backend identifiers.

## Tech Stack

- HTML
- JavaScript (SheetJS Library)
- CSS

## Outcome

The initial version of the project focused on converting raw data of newly admitted students into SQL insert statements. After the raw conversion, there was a manual mapping process where specific values such as program, nationality, and gender were associated with their corresponding backend identifiers. This manual mapping proved to be time-consuming.

## Challenges

### Manual Mapping Process

The manual mapping of program, nationality, and gender identifiers was error-prone and time-consuming. Identifying and associating each value with its corresponding backend identifier became a significant challenge, especially as the dataset grew.

### Backend Identification Issues

The backend system used unique IDs to recognize programs, nationality, and gender. Manually aligning the frontend data with backend identifiers became a bottleneck, leading to discrepancies and potential errors in data processing.

## Improved Features

To address these challenges and enhance the project's functionality, an improved version was implemented. The improved features include:

- **Mapping Solution:** Introduced a mapping system for programs, nationality, and gender to resolve backend identification issues.
- **Simplified Conversion:** Removed the need for manual identification and replaced it with an automated mapping process.
- **Streamlined Workflow:** Improved the overall workflow by reducing manual steps and enhancing user experience.

## How it Works

1. Users upload an XLSX file containing newly admitted student data using the provided form.
2. JavaScript code reads the XLSX file and extracts data using the SheetJS library.
3. Data is processed, and specific values are automatically mapped to predefined IDs for programs, nationality, and gender.
4. The SQL dump is generated and displayed, providing a more user-friendly and efficient solution.

## Benefits

The challenges of manual mapping and backend identification issues were effectively addressed by the improved version of the project. The mapping solution streamlined the conversion process, reducing errors and enhancing the overall efficiency of processing newly admitted student data.
