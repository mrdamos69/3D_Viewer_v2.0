# 3DViewer v2.0

![3dviewer2.0](obj/one.png)

## Table of Contents

1. [Introduction](#introduction)
2. [Information](#information)
3. [3DViewer v2.0](#part-1-3dviewer-v20)
4. [Bonus Settings](#part-2-bonus-settings)
5. [Bonus Record](#part-3-bonus-record)

## Introduction

In this project, the goal is to implement a 3D wireframe model viewer in C++ (C++17 standard) using object-oriented programming principles. The application, named 3DViewer v2.0, extends the functionality of the previous version (3DViewer v1.0). The project follows the Google style guide and includes a Makefile for building and testing. The program utilizes the Model-View-Controller (MVC) pattern, with a focus on separating business logic and interface components.

## Information

### Design Patterns

Design patterns play a crucial role in structuring the application. The project emphasizes the use of established design patterns, such as the Model-View-Controller (MVC) pattern. This separation of concerns ensures a clean and modular codebase, making it easier to manage both the interface and business logic.

## Part 1. 3DViewer v2.0

### Features

- Load wireframe models from an obj file (supporting vertices and surfaces list only).
- Translate the model by a given distance along the X, Y, Z axes.
- Rotate the model by a given angle along its X, Y, Z axes.
- Scale the model by a given value.
- GUI implementation using a C++ GUI library (e.g., Qt, SFML, GTK+, Nanogui, Nngui).
- Visualization area for wireframe models.
- Buttons and input fields for translation, rotation, and scaling.
- Display model information: file name, number of vertices, and edges.
- Support for viewing models with varying vertex counts without freezing.
- Usage of matrices from the s21_matrix+ project for affine transformations.

### Implementation Details

- MVC pattern with thin controllers.
- Three different design patterns integrated (e.g., facade, strategy, command).
- All classes implemented within the `s21` namespace.

## Part 2. Bonus. Settings

### Additional Features

- Customizable projection type (parallel and central).
- Configuration options for edge type (solid, dashed), color, and thickness.
- Display options for vertices (none, circle, square), customizable color, and size.
- Background color customization.
- Settings persistence between program restarts.

## Part 3. Bonus. Record
![3dviewer2.0](obj/cat_gif.gif)
### Additional Feature

- Save captured images as BMP and JPEG files.
- Record small screencasts of the current affine transformation into GIF animations.
- GIF settings: 640x480 resolution, 10fps, 5-second duration.

## Building and Running the Project

1. Clone the repository:

    ```bash
        git clone https://github.com/yourusername/3DViewer-v2.0.git
        cd 3D_Viewer_v2.0


2. **Build the project:**
    ```bash
        make install

## Contributors
[Dmitrii Chichkanov (mrdamos69)](https://github.com/mrdamos69)

[Ayzat Akhmetzyanov (AjzSAhmetzyanov)](https://github.com/AjzSAhmetzyanov)