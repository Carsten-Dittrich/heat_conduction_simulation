# Heat Conduction Simulation

This project is a personal coding exercise that combines **physics** and **programming**.  
The goal is to simulate **heat conduction** in a material using **C++** for the core simulation and **Python** for visualization.


## Current Repo structure (16.02.26):

```
heat_conduction_simulation/
│
├── src/                  -> C++ source files (main.cpp, libs…)
├── include/              -> C++ headers
├── build/                -> Compiled binaries (.exe; ignored by git)
|
├── outputs/              
│   ├── plots/            -> Plotting output (plots, GIFs, ...)
│   ├── raw/              -> C++ Simulation results (TXT, CSV, ...)
│
├── python/               -> For visualization
│   ├── temp/             -> Temporary files for GIF creation
│   ├── plotting.py       -> Main plotting script
│   ├── requirements.txt  -> Python dependencies
│
├── docs/                 -> Images, explanations, notes
├── .gitignore
└── README
```