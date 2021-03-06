int neighbours[N + 1][7] = {
    {0},
    {2, 3, 4, 0},
    {1, 3, 5, 6, 0},
    {1, 2, 4, 6, 7, 8, 0},
    {1, 3, 8, 9, 0},
    {2, 6, 10, 11, 0},
    {2, 3, 5, 7, 11, 12, 0},
    {3, 6, 8, 12, 13, 14, 0},
    {3, 4, 7, 9, 14, 15, 0},
    {4, 8, 15, 16, 0},
    {5, 11, 17, 18, 0},
    {5, 6, 10, 12, 18, 19, 0},
    {6, 7, 11, 13, 19, 20, 0},
    {7, 12, 14, 20, 21, 22, 0},
    {8, 7, 15, 13, 22, 23, 0},
    {8, 9, 14, 16, 23, 24, 0},
    {9, 15, 24, 25, 0},
    {10, 18, 26, 27, 0},
    {10, 11, 17, 19, 27, 28, 0},
    {11, 12, 18, 20, 28, 29, 0},
    {12, 13, 19, 21, 29, 30, 0},
    {13, 20, 22, 30, 31, 32, 0},
    {13, 14, 21, 23, 32, 33, 0},
    {14, 15, 22, 24, 33, 34, 0},
    {15, 16, 23, 25, 34, 35, 0},
    {16, 24, 35, 36, 0},
    {17, 27, 37, 38, 0},
    {17, 18, 26, 28, 38, 39, 0},
    {18, 19, 27, 29, 39, 40, 0},
    {19, 20, 28, 30, 40, 41, 0},
    {20, 21, 29, 31, 41, 42, 0},
    {21, 30, 32, 42, 43, 44, 0},
    {21, 22, 31, 33, 44, 45, 0},
    {22, 23, 32, 34, 45, 46, 0},
    {23, 24, 33, 35, 46, 47, 0},
    {24, 25, 34, 36, 47, 48, 0},
    {25, 35, 48, 49, 0},
    {26, 38, 50, 0},
    {26, 27, 37, 39, 50, 51, 0},
    {27, 28, 38, 40, 51, 52, 0},
    {28, 29, 39, 41, 52, 53, 0},
    {29, 30, 40, 42, 53, 54, 0},
    {30, 31, 41, 43, 54, 55, 0},
    {31, 42, 44, 55, 56, 0},
    {31, 32, 43, 45, 56, 57, 0},
    {32, 33, 44, 46, 57, 58, 0},
    {33, 34, 45, 47, 58, 59, 0},
    {34, 35, 46, 48, 59, 60, 0},
    {35, 36, 47, 49, 60, 61, 0},
    {36, 48, 61, 0},
    {37, 38, 51, 62, 0},
    {38, 39, 50, 52, 62, 63, 0},
    {39, 40, 51, 53, 63, 64, 0},
    {40, 41, 52, 54, 64, 65, 0},
    {41, 42, 53, 55, 65, 66, 0},
    {42, 43, 54, 56, 66, 67, 0},
    {43, 44, 55, 57, 67, 68, 0},
    {44, 45, 56, 58, 68, 69, 0},
    {45, 46, 57, 59, 69, 70, 0},
    {46, 47, 58, 60, 70, 71, 0},
    {47, 48, 59, 61, 71, 72, 0},
    {48, 49, 60, 72, 0},
    {50, 51, 63, 73, 0},
    {51, 52, 62, 64, 73, 74, 0},
    {52, 53, 63, 65, 74, 75, 0},
    {53, 54, 64, 66, 75, 76, 0},
    {54, 55, 65, 67, 76, 77, 0},
    {55, 56, 66, 68, 77, 78, 0},
    {56, 57, 67, 69, 78, 79, 0},
    {57, 58, 68, 70, 79, 80, 0},
    {58, 59, 69, 71, 80, 81, 0},
    {59, 60, 70, 72, 81, 82, 0},
    {60, 61, 71, 82, 0},
    {62, 63, 74, 83, 0},
    {63, 64, 73, 75, 83, 84, 0},
    {64, 65, 74, 76, 84, 85, 0},
    {65, 66, 75, 77, 85, 86, 0},
    {66, 67, 76, 78, 86, 87, 0},
    {67, 68, 77, 79, 87, 88, 0},
    {68, 69, 78, 80, 88, 89, 0},
    {69, 70, 79, 81, 89, 90, 0},
    {70, 71, 80, 82, 90, 91, 0},
    {71, 72, 81, 91, 0},
    {73, 74, 84, 92, 0},
    {74, 75, 83, 85, 92, 93, 0},
    {75, 76, 84, 86, 93, 94, 0},
    {76, 77, 85, 87, 94, 95, 0},
    {77, 78, 86, 88, 95, 96, 0},
    {78, 79, 87, 89, 96, 97, 0},
    {79, 80, 88, 90, 97, 98, 0},
    {80, 81, 89, 91, 98, 99, 0},
    {81, 82, 90, 99, 0},
    {83, 84, 93, 100, 0},
    {84, 85, 92, 94, 100, 101, 0},
    {85, 86, 93, 95, 101, 102, 0},
    {86, 87, 94, 96, 102, 103, 0},
    {87, 88, 95, 97, 103, 104, 0},
    {88, 89, 96, 98, 104, 105, 0},
    {89, 90, 97, 99, 105, 106, 0},
    {90, 91, 98, 106, 0},
    {92, 93, 101, 0},
    {93, 94, 100, 102, 0},
    {94, 95, 101, 103, 0},
    {95, 96, 102, 104, 0},
    {96, 97, 103, 105, 0},
    {97, 98, 104, 106, 0},
    {98, 99, 105, 0},
};

int joint[N + 1][30] = {
    {0},
    {6, 2, 3, 8, 3, 4, 0},
    {4, 1, 3, 7, 3, 6, 11, 5, 6, 0},
    {5, 2, 6, 9, 4, 8, 12, 6, 7, 14, 7, 8, 0},
    {2, 1, 3, 7, 3, 8, 15, 8, 9, 0},
    {3, 2, 6, 12, 6, 11, 18, 10, 11, 0},
    {1, 2, 3, 8, 3, 7, 10, 5, 11, 13, 7, 12, 19, 11, 12, -1, 2, 5, 0},
    {2, 3, 6, 4, 3, 8, 11, 6, 12, 15, 8, 14, 20, 12, 13, 22, 13, 14, 0},
    {1, 3, 4, 6, 3, 7, 13, 7, 14, 16, 9, 15, 23, 14, 15, -1, 4, 9, 0},
    {3, 4, 8, 14, 8, 15, 24, 15, 16, 0},
    {6, 5, 11, 19, 11, 18, 27, 17, 18, 0},
    {2, 5, 6, 7, 6, 12, 17, 10, 18, 20, 12, 19, 28, 18, 19, -1, 5, 10, 0},
    {3, 6, 7, 5, 6, 11, 14, 7, 13, 18, 11, 19, 21, 13, 20, 29, 19, 20, 0},
    {6, 7, 12, 8, 7, 14, 19, 12, 20, 23, 14, 22, 30, 20, 21, 32, 21, 22, 0},
    {3, 8, 7, 9, 8, 15, 12, 7, 13, 21, 13, 22, 24, 15, 23, 33, 22, 23, 0},
    {4, 8, 9, 7, 8, 14, 22, 14, 23, 25, 16, 24, 34, 23, 24, -1, 9, 16, 0},
    {8, 9, 15, 23, 15, 24, 35, 24, 25, 0},
    {11, 10, 18, 28, 18, 27, 38, 26, 27, 0},
    {5, 10, 11, 12, 11, 19, 26, 17, 27, 29, 19, 28, 39, 27, 28, -1, 10, 17, 0},
    {6, 11, 12, 10, 11, 18, 13, 12, 20, 27, 18, 28, 30, 20, 29, 40, 28, 29, 0},
    {7, 12, 13, 11, 12, 19, 22, 13, 21, 28, 19, 29, 31, 21, 30, 41, 29, 30, 0},
    {12, 13, 20, 14, 13, 22, 29, 20, 30, 33, 22, 32, 42, 30, 31, 44, 31, 32, 0},
    {7, 13, 14, 15, 14, 23, 20, 13, 21, 31, 21, 32, 34, 23, 33, 45, 32, 33, 0},
    {8, 14, 15, 13, 14, 22, 16, 15, 24, 32, 22, 33, 35, 24, 34, 46, 33, 34, 0},
    {9, 15, 16, 14, 15, 23, 33, 23, 34, 36, 25, 35, 47, 34, 35, -1, 16, 25, 0},
    {15, 16, 24, 34, 24, 35, 48, 35, 36, 0},
    {18, 17, 27, 39, 27, 38, 50, 37, 38, 0},
    {10, 17, 18, 19, 18, 28, 37, 26, 38, 40, 28, 39, 51, 38, 39, -1, 17, 26, 0},
    {11, 18, 19, 17, 18, 27, 20, 19, 29, 38, 27, 39, 41, 29, 40, 52, 39, 40, 0},
    {12, 19, 20, 18, 19, 28, 21, 20, 30, 39, 28, 40, 42, 30, 41, 53, 40, 41, 0},
    {13, 20, 21, 19, 20, 29, 32, 21, 31, 40, 29, 41, 43, 31, 42, 54, 41, 42, 0},
    {20, 21, 30, 22, 21, 32, 41, 30, 42, 45, 32, 44, 55, 42, 43, 56, 43, 44, 0},
    {13, 21, 22, 23, 22, 33, 30, 21, 31, 43, 31, 44, 46, 33, 45, 57, 44, 45, 0},
    {14, 22, 23, 21, 22, 32, 24, 23, 34, 44, 32, 45, 47, 34, 46, 58, 45, 46, 0},
    {15, 23, 24, 22, 23, 33, 25, 24, 35, 45, 33, 46, 48, 35, 47, 59, 46, 47, 0},
    {16, 24, 25, 23, 24, 34, 46, 34, 47, 49, 36, 48, 60, 47, 48, -1, 25, 36, 0},
    {24, 25, 35, 47, 35, 48, 61, 48, 49, 0},
    {27, 26, 38, 51, 38, 50, 0},
    {17, 26, 27, 28, 27, 39, 52, 39, 51, 62, 50, 51, 0},
    {18, 27, 28, 26, 27, 38, 29, 28, 40, 50, 38, 51, 53, 40, 52, 63, 51, 52, 0},
    {19, 28, 29, 27, 28, 39, 30, 29, 41, 51, 39, 52, 54, 41, 53, 64, 52, 53, 0},
    {20, 29, 30, 28, 29, 40, 31, 30, 42, 52, 40, 53, 55, 42, 54, 65, 53, 54, 0},
    {21, 30, 31, 29, 30, 41, 44, 31, 43, 53, 41, 54, 56, 43, 55, 66, 54, 55, 0},
    {30, 31, 42, 32, 31, 44, 54, 42, 55, 57, 44, 56, 67, 55, 56, 0},
    {21, 31, 32, 33, 32, 45, 42, 31, 43, 55, 43, 56, 58, 45, 57, 68, 56, 57, 0},
    {22, 32, 33, 31, 32, 44, 34, 33, 46, 56, 44, 57, 59, 46, 58, 69, 57, 58, 0},
    {23, 33, 34, 32, 33, 45, 35, 34, 47, 57, 45, 58, 60, 47, 59, 70, 58, 59, 0},
    {24, 34, 35, 33, 34, 46, 36, 35, 48, 58, 46, 59, 61, 48, 60, 71, 59, 60, 0},
    {25, 35, 36, 34, 35, 47, 59, 47, 60, 72, 60, 61, 0},
    {35, 36, 48, 60, 48, 61, 0},
    {26, 37, 38, 39, 38, 51, 63, 51, 62, 0},
    {27, 38, 39, 37, 38, 50, 40, 39, 52, 64, 52, 63, 73, 62, 63, -1, 50, 62, 0},
    {28, 39, 40, 38, 39, 51, 41, 40, 53, 62, 51, 63, 65, 53, 64, 74, 63, 64, 0},
    {29, 40, 41, 39, 40, 52, 42, 41, 54, 63, 52, 64, 66, 54, 65, 75, 64, 65, 0},
    {30, 41, 42, 40, 41, 53, 43, 42, 55, 64, 53, 65, 67, 55, 66, 76, 65, 66, 0},
    {31, 42, 43, 41, 42, 54, 44, 43, 56, 65, 54, 66, 68, 56, 67, 77, 66, 67, 0},
    {31, 43, 44, 42, 43, 55, 45, 44, 57, 66, 55, 67, 69, 57, 68, 78, 67, 68, 0},
    {32, 44, 45, 43, 44, 56, 46, 45, 58, 67, 56, 68, 70, 58, 69, 79, 68, 69, 0},
    {33, 45, 46, 44, 45, 57, 47, 46, 59, 68, 57, 69, 71, 59, 70, 80, 69, 70, 0},
    {34, 46, 47, 45, 46, 58, 48, 47, 60, 69, 58, 70, 72, 60, 71, 81, 70, 71, 0},
    {35, 47, 48, 46, 47, 59, 49, 48, 61, 70, 59, 71, 82, 71, 72, -1, 61, 72, 0},
    {36, 48, 49, 47, 48, 60, 71, 60, 72, 0},
    {38, 50, 51, 52, 51, 63, 74, 63, 73, 0},
    {39, 51, 52, 50, 51, 62, 53, 52, 64, 75, 64, 74, 83, 73, 74, -1, 62, 73, 0},
    {40, 52, 53, 51, 52, 63, 54, 53, 65, 73, 63, 74, 76, 65, 75, 84, 74, 75, 0},
    {41, 53, 54, 52, 53, 64, 55, 54, 66, 74, 64, 75, 77, 66, 76, 85, 75, 76, 0},
    {42, 54, 55, 53, 54, 65, 56, 55, 67, 75, 65, 76, 78, 67, 77, 86, 76, 77, 0},
    {43, 55, 56, 54, 55, 66, 57, 56, 68, 76, 66, 77, 79, 68, 78, 87, 77, 78, 0},
    {44, 56, 57, 55, 56, 67, 58, 57, 69, 77, 67, 78, 80, 69, 79, 88, 78, 79, 0},
    {45, 57, 58, 56, 57, 68, 59, 58, 70, 78, 68, 79, 81, 70, 80, 89, 79, 80, 0},
    {46, 58, 59, 57, 58, 69, 60, 59, 71, 79, 69, 80, 82, 71, 81, 90, 80, 81, 0},
    {47, 59, 60, 58, 59, 70, 61, 60, 72, 80, 70, 81, 91, 81, 82, -1, 72, 82, 0},
    {48, 60, 61, 59, 60, 71, 81, 71, 82, 0},
    {51, 62, 63, 64, 63, 74, 84, 74, 83, 0},
    {52, 63, 64, 62, 63, 73, 65, 64, 75, 85, 75, 84, 92, 83, 84, -1, 73, 83, 0},
    {53, 64, 65, 63, 64, 74, 66, 65, 76, 83, 74, 84, 86, 76, 85, 93, 84, 85, 0},
    {54, 65, 66, 64, 65, 75, 67, 66, 77, 84, 75, 85, 87, 77, 86, 94, 85, 86, 0},
    {55, 66, 67, 65, 66, 76, 68, 67, 78, 85, 76, 86, 88, 78, 87, 95, 86, 87, 0},
    {56, 67, 68, 66, 67, 77, 69, 68, 79, 86, 77, 87, 89, 79, 88, 96, 87, 88, 0},
    {57, 68, 69, 67, 68, 78, 70, 69, 80, 87, 78, 88, 90, 80, 89, 97, 88, 89, 0},
    {58, 69, 70, 68, 69, 79, 71, 70, 81, 88, 79, 89, 91, 81, 90, 98, 89, 90, 0},
    {59, 70, 71, 69, 70, 80, 72, 71, 82, 89, 80, 90, 99, 90, 91, -1, 82, 91, 0},
    {60, 71, 72, 70, 71, 81, 90, 81, 91, 0},
    {63, 73, 74, 75, 74, 84, 93, 84, 92, 0},
    {64, 74, 75, 73, 74, 83, 76, 75, 85, 94, 85, 93, 100, 92, 93, -1, 83, 92, 0},
    {65, 75, 76, 74, 75, 84, 77, 76, 86, 92, 84, 93, 95, 86, 94, 101, 93, 94, 0},
    {66, 76, 77, 75, 76, 85, 78, 77, 87, 93, 85, 94, 96, 87, 95, 102, 94, 95, 0},
    {67, 77, 78, 76, 77, 86, 79, 78, 88, 94, 86, 95, 97, 88, 96, 103, 95, 96, 0},
    {68, 78, 79, 77, 78, 87, 80, 79, 89, 95, 87, 96, 98, 89, 97, 104, 96, 97, 0},
    {69, 79, 80, 78, 79, 88, 81, 80, 90, 96, 88, 97, 99, 90, 98, 105, 97, 98, 0},
    {70, 80, 81, 79, 80, 89, 82, 81, 91, 97, 89, 98, 106, 98, 99, -1, 91, 99, 0},
    {71, 81, 82, 80, 81, 90, 98, 90, 99, 0},
    {74, 83, 84, 85, 84, 93, 101, 93, 100, 0},
    {75, 84, 85, 83, 84, 92, 86, 85, 94, 102, 94, 101, 0},
    {76, 85, 86, 84, 85, 93, 87, 86, 95, 100, 93, 101, 103, 95, 102, -1, 101, 102, 0},
    {77, 86, 87, 85, 86, 94, 88, 87, 96, 101, 94, 102, 104, 96, 103, -1, 102, 103, 0},
    {78, 87, 88, 86, 87, 95, 89, 88, 97, 102, 95, 103, 105, 97, 104, -1, 103, 104, 0},
    {79, 88, 89, 87, 88, 96, 90, 89, 98, 103, 96, 104, 106, 98, 105, -1, 104, 105, 0},
    {80, 89, 90, 88, 89, 97, 91, 90, 99, 104, 97, 105, 0},
    {81, 90, 91, 89, 90, 98, 105, 98, 106, 0},
    {84, 92, 93, 94, 93, 101, 0},
    {85, 93, 94, 92, 93, 100, 95, 94, 102, 0},
    {86, 94, 95, 93, 94, 101, 96, 95, 103, 0},
    {87, 95, 96, 94, 95, 102, 97, 96, 104, 0},
    {88, 96, 97, 95, 96, 103, 98, 97, 105, 0},
    {89, 97, 98, 96, 97, 104, 99, 98, 106, 0},
    {90, 98, 99, 97, 98, 105, 0},
};

int field_mask[N + 1] = {
    0,
    17, 1, 0, 16, 1, 0, 0, 0, 16, 1,
    0, 0, 0, 0, 0, 16, 1, 0, 0, 0,
    0, 0, 0, 0, 16, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 2, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 2, 0, 0, 0, 0, 0, 0, 0,
    8, 2, 0, 0, 0, 0, 0, 0, 8, 6,
    4, 4, 4, 4, 4, 12,
};

int side_mask[6] = {
    0, 1, 2, 4, 8, 16
};

int rotate[107] = {
    0, 37, 50, 38, 26, 62, 51, 39, 27, 17,
    73, 63, 52, 40, 28, 18, 10, 83, 74, 64,
    53, 41, 29, 19, 11, 5, 92, 84, 75, 65,
    54, 42, 30, 20, 12, 6, 2, 100, 93, 85,
    76, 66, 55, 43, 31, 21, 13, 7, 3, 1,
    101, 94, 86, 77, 67, 56, 44, 32, 22, 14,
    8, 4, 102, 95, 87, 78, 68, 57, 45, 33,
    23, 15, 9, 103, 96, 88, 79, 69, 58, 46,
    34, 24, 16, 104, 97, 89, 80, 70, 59, 47,
    35, 25, 105, 98, 90, 81, 71, 60, 48, 36,
    106, 99, 91, 82, 72, 61, 49,
};

int sym[107] = {
	0,
	1,
	4, 3, 2,
	9, 8, 7, 6, 5,
	16, 15, 14, 13, 12, 11, 10,
	25, 24, 23, 22, 21, 20, 19, 18, 17,
	36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26,
	49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37,
	61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50,
	72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62,
	82, 81, 80, 79, 78, 77, 76, 75, 74, 73,
	91, 90, 89, 88, 87, 86, 85, 84, 83,
	99, 98, 97, 96, 95, 94, 93, 92,
	106, 105, 104, 103, 102, 101, 100,
};

int sides[6][8] = {
    {0},
    {1, 2, 5, 10, 17, 26, 37, 0},
    {37, 50, 62, 73, 83, 92, 100, 0},
    {100, 101, 102, 103, 104, 105, 106, 0},
    {49, 61, 72, 82, 91, 99, 106, 0},
    {1, 4, 9, 16, 25, 36, 49, 0},
};

int attack[107][20] = {
    {0},
    {4, 2, 3, 0},
    {5, 3, 6, 6, 1, 3, 6, -1, 5, 0},
    {4, 2, 1, 6, 1, 2, 7, 2, 6, 7, 4, 8, 8, 1, 4, 8, 6, 7, 0},
    {8, 1, 3, 8, -1, 9, 9, 3, 8, 0},
    {6, -1, 2, 10, 6, 11, 11, 2, 6, 11, -1, 10, 0},
    {5, 3, 2, 7, 2, 3, 11, 2, 5, 11, 7, 12, 12, 3, 7, 12, 5, 11, 0},
    {8, 6, 3, 12, 3, 6, 13, 6, 12, 13, 8, 14, 14, 3, 8, 14, 12, 13, 0},
    {7, 4, 3, 9, 3, 4, 14, 3, 7, 14, 9, 15, 15, 4, 9, 15, 7, 14, 0},
    {8, -1, 4, 15, 4, 8, 15, -1, 16, 16, 8, 15, 0},
    {11, -1, 5, 17, 11, 18, 18, 5, 11, 18, -1, 17, 0},
    {10, 6, 5, 12, 5, 6, 18, 5, 10, 18, 12, 19, 19, 6, 12, 19, 10, 18, 0},
    {11, 7, 6, 13, 6, 7, 19, 6, 11, 19, 13, 20, 20, 7, 13, 20, 11, 19, 0},
    {14, 12, 7, 20, 7, 12, 21, 12, 20, 21, 14, 22, 22, 7, 14, 22, 20, 21, 0},
    {15, 7, 8, 13, 8, 7, 22, 7, 13, 22, 15, 23, 23, 8, 15, 23, 13, 22, 0},
    {14, 9, 8, 16, 8, 9, 23, 8, 14, 23, 16, 24, 24, 9, 16, 24, 14, 23, 0},
    {15, -1, 9, 24, 9, 15, 24, -1, 25, 25, 15, 24, 0},
    {18, -1, 10, 26, 18, 27, 27, 10, 18, 27, -1, 26, 0},
    {17, 11, 10, 19, 10, 11, 27, 10, 17, 27, 19, 28, 28, 11, 19, 28, 17, 27, 0},
    {18, 12, 11, 20, 11, 12, 28, 11, 18, 28, 20, 29, 29, 12, 20, 29, 18, 28, 0},
    {19, 13, 12, 21, 12, 13, 29, 12, 19, 29, 21, 30, 30, 13, 21, 30, 19, 29, 0},
    {22, 20, 13, 30, 13, 20, 31, 20, 30, 31, 22, 32, 32, 13, 22, 32, 30, 31, 0},
    {21, 14, 13, 23, 13, 14, 32, 13, 21, 32, 23, 33, 33, 14, 23, 33, 21, 32, 0},
    {22, 15, 14, 24, 14, 15, 33, 14, 22, 33, 24, 34, 34, 15, 24, 34, 22, 33, 0},
    {23, 16, 15, 25, 15, 16, 34, 15, 23, 34, 25, 35, 35, 16, 25, 35, 23, 34, 0},
    {24, -1, 16, 35, 16, 24, 35, -1, 36, 36, 24, 35, 0},
    {27, -1, 17, 37, 27, 38, 38, 17, 27, 0},
    {26, 18, 17, 28, 17, 18, 38, 17, 26, 38, 28, 39, 39, 18, 28, 39, 26, 38, 0},
    {27, 19, 18, 29, 18, 19, 39, 18, 27, 39, 29, 40, 40, 19, 29, 40, 27, 39, 0},
    {28, 20, 19, 30, 19, 20, 40, 19, 28, 40, 30, 41, 41, 20, 30, 41, 28, 40, 0},
    {29, 21, 20, 31, 20, 21, 41, 20, 29, 41, 31, 42, 42, 21, 31, 42, 29, 41, 0},
    {32, 30, 21, 42, 21, 30, 43, 30, 42, 43, 32, 44, 44, 21, 32, 44, 42, 43, 0},
    {31, 22, 21, 33, 21, 22, 44, 21, 31, 44, 33, 45, 45, 22, 33, 45, 31, 44, 0},
    {32, 23, 22, 34, 22, 23, 45, 22, 32, 45, 34, 46, 46, 23, 34, 46, 32, 45, 0},
    {33, 24, 23, 35, 23, 24, 46, 23, 33, 46, 35, 47, 47, 24, 35, 47, 33, 46, 0},
    {34, 25, 24, 36, 24, 25, 47, 24, 34, 47, 36, 48, 48, 25, 36, 48, 34, 47, 0},
    {35, -1, 25, 48, 25, 35, 49, 35, 48, 0},
    {50, 26, 38, 0},
    {37, 27, 26, 39, 26, 27, 50, 26, 37, 50, 39, 51, 51, 27, 39, 51, 37, 50, 0},
    {38, 28, 27, 40, 27, 28, 51, 27, 38, 51, 40, 52, 52, 28, 40, 52, 38, 51, 0},
    {39, 29, 28, 41, 28, 29, 52, 28, 39, 52, 41, 53, 53, 29, 41, 53, 39, 52, 0},
    {40, 30, 29, 42, 29, 30, 53, 29, 40, 53, 42, 54, 54, 30, 42, 54, 40, 53, 0},
    {41, 31, 30, 43, 30, 31, 54, 30, 41, 54, 43, 55, 55, 31, 43, 55, 41, 54, 0},
    {44, 42, 31, 55, 31, 42, 55, 44, 56, 56, 31, 44, 56, 42, 55, 0},
    {43, 32, 31, 45, 31, 32, 56, 31, 43, 56, 45, 57, 57, 32, 45, 57, 43, 56, 0},
    {44, 33, 32, 46, 32, 33, 57, 32, 44, 57, 46, 58, 58, 33, 46, 58, 44, 57, 0},
    {45, 34, 33, 47, 33, 34, 58, 33, 45, 58, 47, 59, 59, 34, 47, 59, 45, 58, 0},
    {46, 35, 34, 48, 34, 35, 59, 34, 46, 59, 48, 60, 60, 35, 48, 60, 46, 59, 0},
    {47, 36, 35, 49, 35, 36, 60, 35, 47, 60, 49, 61, 61, 36, 49, 61, 47, 60, 0},
    {61, 36, 48, 0},
    {51, 37, 38, 51, -1, 62, 62, 38, 51, 0},
    {50, 39, 38, 52, 38, 39, 62, 38, 50, 62, 52, 63, 63, 39, 52, 63, 50, 62, 0},
    {51, 40, 39, 53, 39, 40, 63, 39, 51, 63, 53, 64, 64, 40, 53, 64, 51, 63, 0},
    {52, 41, 40, 54, 40, 41, 64, 40, 52, 64, 54, 65, 65, 41, 54, 65, 52, 64, 0},
    {53, 42, 41, 55, 41, 42, 65, 41, 53, 65, 55, 66, 66, 42, 55, 66, 53, 65, 0},
    {54, 43, 42, 56, 42, 43, 66, 42, 54, 66, 56, 67, 67, 43, 56, 67, 54, 66, 0},
    {55, 44, 43, 57, 43, 44, 67, 43, 55, 67, 57, 68, 68, 44, 57, 68, 55, 67, 0},
    {56, 45, 44, 58, 44, 45, 68, 44, 56, 68, 58, 69, 69, 45, 58, 69, 56, 68, 0},
    {57, 46, 45, 59, 45, 46, 69, 45, 57, 69, 59, 70, 70, 46, 59, 70, 57, 69, 0},
    {58, 47, 46, 60, 46, 47, 70, 46, 58, 70, 60, 71, 71, 47, 60, 71, 58, 70, 0},
    {59, 48, 47, 61, 47, 48, 71, 47, 59, 71, 61, 72, 72, 48, 61, 72, 59, 71, 0},
    {60, 49, 48, 60, -1, 72, 72, 48, 60, 0},
    {51, -1, 50, 63, 50, 51, 63, -1, 73, 73, 51, 63, 0},
    {62, 52, 51, 64, 51, 52, 73, 51, 62, 73, 64, 74, 74, 52, 64, 74, 62, 73, 0},
    {63, 53, 52, 65, 52, 53, 74, 52, 63, 74, 65, 75, 75, 53, 65, 75, 63, 74, 0},
    {64, 54, 53, 66, 53, 54, 75, 53, 64, 75, 66, 76, 76, 54, 66, 76, 64, 75, 0},
    {65, 55, 54, 67, 54, 55, 76, 54, 65, 76, 67, 77, 77, 55, 67, 77, 65, 76, 0},
    {66, 56, 55, 68, 55, 56, 77, 55, 66, 77, 68, 78, 78, 56, 68, 78, 66, 77, 0},
    {67, 57, 56, 69, 56, 57, 78, 56, 67, 78, 69, 79, 79, 57, 69, 79, 67, 78, 0},
    {68, 58, 57, 70, 57, 58, 79, 57, 68, 79, 70, 80, 80, 58, 70, 80, 68, 79, 0},
    {69, 59, 58, 71, 58, 59, 80, 58, 69, 80, 71, 81, 81, 59, 71, 81, 69, 80, 0},
    {70, 60, 59, 72, 59, 60, 81, 59, 70, 81, 72, 82, 82, 60, 72, 82, 70, 81, 0},
    {60, -1, 61, 71, 61, 60, 71, -1, 82, 82, 60, 71, 0},
    {63, -1, 62, 74, 62, 63, 74, -1, 83, 83, 63, 74, 0},
    {73, 64, 63, 75, 63, 64, 83, 63, 73, 83, 75, 84, 84, 64, 75, 84, 73, 83, 0},
    {74, 65, 64, 76, 64, 65, 84, 64, 74, 84, 76, 85, 85, 65, 76, 85, 74, 84, 0},
    {75, 66, 65, 77, 65, 66, 85, 65, 75, 85, 77, 86, 86, 66, 77, 86, 75, 85, 0},
    {76, 67, 66, 78, 66, 67, 86, 66, 76, 86, 78, 87, 87, 67, 78, 87, 76, 86, 0},
    {77, 68, 67, 79, 67, 68, 87, 67, 77, 87, 79, 88, 88, 68, 79, 88, 77, 87, 0},
    {78, 69, 68, 80, 68, 69, 88, 68, 78, 88, 80, 89, 89, 69, 80, 89, 78, 88, 0},
    {79, 70, 69, 81, 69, 70, 89, 69, 79, 89, 81, 90, 90, 70, 81, 90, 79, 89, 0},
    {80, 71, 70, 82, 70, 71, 90, 70, 80, 90, 82, 91, 91, 71, 82, 91, 80, 90, 0},
    {71, -1, 72, 81, 72, 71, 81, -1, 91, 91, 71, 81, 0},
    {74, -1, 73, 84, 73, 74, 84, -1, 92, 92, 74, 84, 0},
    {83, 75, 74, 85, 74, 75, 92, 74, 83, 92, 85, 93, 93, 75, 85, 93, 83, 92, 0},
    {84, 76, 75, 86, 75, 76, 93, 75, 84, 93, 86, 94, 94, 76, 86, 94, 84, 93, 0},
    {85, 77, 76, 87, 76, 77, 94, 76, 85, 94, 87, 95, 95, 77, 87, 95, 85, 94, 0},
    {86, 78, 77, 88, 77, 78, 95, 77, 86, 95, 88, 96, 96, 78, 88, 96, 86, 95, 0},
    {87, 79, 78, 89, 78, 79, 96, 78, 87, 96, 89, 97, 97, 79, 89, 97, 87, 96, 0},
    {88, 80, 79, 90, 79, 80, 97, 79, 88, 97, 90, 98, 98, 80, 90, 98, 88, 97, 0},
    {89, 81, 80, 91, 80, 81, 98, 80, 89, 98, 91, 99, 99, 81, 91, 99, 89, 98, 0},
    {81, -1, 82, 90, 82, 81, 90, -1, 99, 99, 81, 90, 0},
    {84, -1, 83, 93, 83, 84, 100, 84, 93, 0},
    {92, 85, 84, 94, 84, 85, 100, 84, 92, 100, 94, 101, 101, 85, 94, 101, 92, 100, 0},
    {93, 86, 85, 95, 85, 86, 101, 85, 93, 101, 95, 102, 102, 86, 95, 102, 93, 101, 0},
    {94, 87, 86, 96, 86, 87, 102, 86, 94, 102, 96, 103, 103, 87, 96, 103, 94, 102, 0},
    {95, 88, 87, 97, 87, 88, 103, 87, 95, 103, 97, 104, 104, 88, 97, 104, 95, 103, 0},
    {96, 89, 88, 98, 88, 89, 104, 88, 96, 104, 98, 105, 105, 89, 98, 105, 96, 104, 0},
    {97, 90, 89, 99, 89, 90, 105, 89, 97, 105, 99, 106, 106, 90, 99, 106, 97, 105, 0},
    {90, -1, 91, 98, 91, 90, 106, 90, 98, 0},
    {101, 92, 93, 0},
    {94, -1, 102, 100, 94, 93, 102, 93, 94, 0},
    {94, -1, 101, 95, -1, 103, 101, 95, 94, 103, 94, 95, 0},
    {95, -1, 102, 96, -1, 104, 102, 96, 95, 104, 95, 96, 0},
    {96, -1, 103, 97, -1, 105, 103, 97, 96, 105, 96, 97, 0},
    {97, -1, 104, 104, 98, 97, 106, 97, 98, 0},
    {105, 99, 98, 0},
};

int weak[N + 1][20] = {
    {0},
    {5, 2, 7, 3, 9, 4, 0},
    {8, 3, 10, 5, 12, 6, 0},
    {11, 6, 13, 7, 15, 8, 0},
    {6, 3, 14, 8, 16, 9, 0},
    {1, 2, 7, 6, 17, 10, 19, 11, 0},
    {4, 3, 14, 7, 18, 11, 20, 12, 0},
    {1, 3, 5, 6, 9, 8, 19, 12, 21, 13, 23, 14, 0},
    {2, 3, 12, 7, 22, 14, 24, 15, 0},
    {1, 4, 7, 8, 23, 15, 25, 16, 0},
    {2, 5, 12, 11, 26, 17, 28, 18, 0},
    {3, 6, 13, 12, 27, 18, 29, 19, 0},
    {2, 6, 8, 7, 10, 11, 22, 13, 28, 19, 30, 20, 0},
    {3, 7, 11, 12, 15, 14, 29, 20, 31, 21, 33, 22, 0},
    {4, 8, 6, 7, 16, 15, 20, 13, 32, 22, 34, 23, 0},
    {3, 8, 13, 14, 33, 23, 35, 24, 0},
    {4, 9, 14, 15, 34, 24, 36, 25, 0},
    {5, 10, 19, 18, 37, 26, 39, 27, 0},
    {6, 11, 20, 19, 38, 27, 40, 28, 0},
    {5, 11, 7, 12, 17, 18, 21, 20, 39, 28, 41, 29, 0},
    {6, 12, 14, 13, 18, 19, 32, 21, 40, 29, 42, 30, 0},
    {7, 13, 19, 20, 23, 22, 41, 30, 43, 31, 45, 32, 0},
    {8, 14, 12, 13, 24, 23, 30, 21, 44, 32, 46, 33, 0},
    {7, 14, 9, 15, 21, 22, 25, 24, 45, 33, 47, 34, 0},
    {8, 15, 22, 23, 46, 34, 48, 35, 0},
    {9, 16, 23, 24, 47, 35, 49, 36, 0},
    {10, 17, 28, 27, 51, 38, 0},
    {11, 18, 29, 28, 50, 38, 52, 39, 0},
    {10, 18, 12, 19, 26, 27, 30, 29, 51, 39, 53, 40, 0},
    {11, 19, 13, 20, 27, 28, 31, 30, 52, 40, 54, 41, 0},
    {12, 20, 22, 21, 28, 29, 44, 31, 53, 41, 55, 42, 0},
    {13, 21, 29, 30, 33, 32, 54, 42, 57, 44, 0},
    {14, 22, 20, 21, 34, 33, 42, 31, 56, 44, 58, 45, 0},
    {13, 22, 15, 23, 31, 32, 35, 34, 57, 45, 59, 46, 0},
    {14, 23, 16, 24, 32, 33, 36, 35, 58, 46, 60, 47, 0},
    {15, 24, 33, 34, 59, 47, 61, 48, 0},
    {16, 25, 34, 35, 60, 48, 0},
    {17, 26, 39, 38, 62, 50, 0},
    {18, 27, 40, 39, 63, 51, 0},
    {17, 27, 19, 28, 37, 38, 41, 40, 62, 51, 64, 52, 0},
    {18, 28, 20, 29, 38, 39, 42, 41, 63, 52, 65, 53, 0},
    {19, 29, 21, 30, 39, 40, 43, 42, 64, 53, 66, 54, 0},
    {20, 30, 32, 31, 40, 41, 65, 54, 67, 55, 0},
    {21, 31, 41, 42, 45, 44, 66, 55, 68, 56, 0},
    {22, 32, 30, 31, 46, 45, 67, 56, 69, 57, 0},
    {21, 32, 23, 33, 43, 44, 47, 46, 68, 57, 70, 58, 0},
    {22, 33, 24, 34, 44, 45, 48, 47, 69, 58, 71, 59, 0},
    {23, 34, 25, 35, 45, 46, 49, 48, 70, 59, 72, 60, 0},
    {24, 35, 46, 47, 71, 60, 0},
    {25, 36, 47, 48, 72, 61, 0},
    {27, 38, 52, 51, 73, 62, 0},
    {26, 38, 28, 39, 53, 52, 74, 63, 0},
    {27, 39, 29, 40, 50, 51, 54, 53, 73, 63, 75, 64, 0},
    {28, 40, 30, 41, 51, 52, 55, 54, 74, 64, 76, 65, 0},
    {29, 41, 31, 42, 52, 53, 56, 55, 75, 65, 77, 66, 0},
    {30, 42, 53, 54, 57, 56, 76, 66, 78, 67, 0},
    {32, 44, 54, 55, 58, 57, 77, 67, 79, 68, 0},
    {31, 44, 33, 45, 55, 56, 59, 58, 78, 68, 80, 69, 0},
    {32, 45, 34, 46, 56, 57, 60, 59, 79, 69, 81, 70, 0},
    {33, 46, 35, 47, 57, 58, 61, 60, 80, 70, 82, 71, 0},
    {34, 47, 36, 48, 58, 59, 81, 71, 0},
    {35, 48, 59, 60, 82, 72, 0},
    {37, 50, 39, 51, 64, 63, 83, 73, 0},
    {38, 51, 40, 52, 65, 64, 84, 74, 0},
    {39, 52, 41, 53, 62, 63, 66, 65, 83, 74, 85, 75, 0},
    {40, 53, 42, 54, 63, 64, 67, 66, 84, 75, 86, 76, 0},
    {41, 54, 43, 55, 64, 65, 68, 67, 85, 76, 87, 77, 0},
    {42, 55, 44, 56, 65, 66, 69, 68, 86, 77, 88, 78, 0},
    {43, 56, 45, 57, 66, 67, 70, 69, 87, 78, 89, 79, 0},
    {44, 57, 46, 58, 67, 68, 71, 70, 88, 79, 90, 80, 0},
    {45, 58, 47, 59, 68, 69, 72, 71, 89, 80, 91, 81, 0},
    {46, 59, 48, 60, 69, 70, 90, 81, 0},
    {47, 60, 49, 61, 70, 71, 91, 82, 0},
    {50, 62, 52, 63, 75, 74, 92, 83, 0},
    {51, 63, 53, 64, 76, 75, 93, 84, 0},
    {52, 64, 54, 65, 73, 74, 77, 76, 92, 84, 94, 85, 0},
    {53, 65, 55, 66, 74, 75, 78, 77, 93, 85, 95, 86, 0},
    {54, 66, 56, 67, 75, 76, 79, 78, 94, 86, 96, 87, 0},
    {55, 67, 57, 68, 76, 77, 80, 79, 95, 87, 97, 88, 0},
    {56, 68, 58, 69, 77, 78, 81, 80, 96, 88, 98, 89, 0},
    {57, 69, 59, 70, 78, 79, 82, 81, 97, 89, 99, 90, 0},
    {58, 70, 60, 71, 79, 80, 98, 90, 0},
    {59, 71, 61, 72, 80, 81, 99, 91, 0},
    {62, 73, 64, 74, 85, 84, 100, 92, 0},
    {63, 74, 65, 75, 86, 85, 101, 93, 0},
    {64, 75, 66, 76, 83, 84, 87, 86, 100, 93, 102, 94, 0},
    {65, 76, 67, 77, 84, 85, 88, 87, 101, 94, 103, 95, 0},
    {66, 77, 68, 78, 85, 86, 89, 88, 102, 95, 104, 96, 0},
    {67, 78, 69, 79, 86, 87, 90, 89, 103, 96, 105, 97, 0},
    {68, 79, 70, 80, 87, 88, 91, 90, 104, 97, 106, 98, 0},
    {69, 80, 71, 81, 88, 89, 105, 98, 0},
    {70, 81, 72, 82, 89, 90, 106, 99, 0},
    {73, 83, 75, 84, 94, 93, 0},
    {74, 84, 76, 85, 95, 94, 0},
    {75, 85, 77, 86, 92, 93, 96, 95, 0},
    {76, 86, 78, 87, 93, 94, 97, 96, 0},
    {77, 87, 79, 88, 94, 95, 98, 97, 0},
    {78, 88, 80, 89, 95, 96, 99, 98, 0},
    {79, 89, 81, 90, 96, 97, 0},
    {80, 90, 82, 91, 97, 98, 0},
    {83, 92, 85, 93, 102, 101, 0},
    {84, 93, 86, 94, 103, 102, 0},
    {85, 94, 87, 95, 100, 101, 104, 103, 0},
    {86, 95, 88, 96, 101, 102, 105, 104, 0},
    {87, 96, 89, 97, 102, 103, 106, 105, 0},
    {88, 97, 90, 98, 103, 104, 0},
    {89, 98, 91, 99, 104, 105, 0},
};

int MAX_ITERATIONS = MAX_TREES - 1;
int MAX_VISITS = MAX_ITERATIONS / 2;
int CORNER_1 = 1;
int CORNER_2 = 37;
int CORNER_3 = 49;
int CORNER_4 = 100;
int CORNER_5 = 106;

Player WHITE = 0;
Player BLACK = 1;
Player NONE = 2;

Move SWAP_MOVE = 0;
Move UNKNOWN_MOVE = -1;

double EXPLORATION_BONUS[MAX_TREES];
