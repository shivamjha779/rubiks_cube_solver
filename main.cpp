#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
#include "Model/RubiksCubeBitboard.cpp"
int main() {
    RubiksCube3dArray object3DArray;
    RubiksCube1dArray object1dArray;
    RubiksCubeBitboard objectBitboard;

    objectBitboard.print();
    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    return 0;
}
