# 🖼️ Pixel Painter — Tiny Image Editor

A simple **C-based image editor** that uses a 5x5 grid of pixels to simulate basic image operations.  
Each pixel is represented by a `0` (off) or `1` (on), allowing you to draw, invert, flip, clear, and rotate the image.

---

## Project Overview

The **Pixel Painter** project is a lightweight console image editor that manipulates a small binary image represented as a 2D array.  
It demonstrates how array manipulation, conditional logic, and modular design can come together to simulate a basic pixel-based editing environment.

Key ideas explored:
- Working with **2D arrays** in C  
- Passing arrays to functions and ensuring **bounds checking**  
- Implementing **modular architecture** across multiple files  
- Using loops for **image transformations**

---

## Features

- **Draw Pixels** — turn on specific pixels by entering row/column coordinates  
- **Invert Image** — swap all 0s to 1s and vice versa  
- **Flip Row** — toggle every pixel in a specific row  
- **Flip Column** — toggle every pixel in a specific column  
- **Clear Image** — reset the entire 5x5 image to zeros  
- **Rotate Image (90°)** — rotate the image clockwise
- **Display Image** — visualize the current state of the grid  

---

## Build Instructions

gcc main.c painter.c -o pixel-painter

./pixel-painter