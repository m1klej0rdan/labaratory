StringProject/                     ← Это ваша основная папка
├── CMakeLists.txt               ← Этот файл ДОЛЖЕН быть здесь
├── StringLib/                   ← Папка с библиотекой
│   ├── CMakeLists.txt          ← Второй CMakeLists.txt здесь
│   ├── include/
│   │   └── StringLib.h
│   └── src/
│       └── StringLib.cpp
├── App/                         ← Папка с программой
│   ├── CMakeLists.txt          ← Третий CMakeLists.txt здесь
│   └── main.cpp
└── README.md                    
