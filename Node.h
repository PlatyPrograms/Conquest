class Node {
public:
    // variables
    Piece * piece;
    AdjacentNodeList * adjacents;
    AdjacentNodeList * bridged;
    int index;

    // functions
    Node(); // 1
    boolean isEmpty(); // 1
    void addPiece(Piece * toAdd); // 1
    void killPiece(); // 1
    Piece * getPiece(); // 1
    boolean isAdjacent(int toTest); // 1
}
