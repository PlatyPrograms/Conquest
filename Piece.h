class Piece {
public:
    // variables
    int type; // see idGuide
    int maxEmbark; // maximum pieces that can be embarked
    Node * curNode; // current location
    std::list<Piece*> embarked; // embarked pieces
    std::list<int> canMove; // types that can be moved to
    std::list<int> canKill; // types that can be killed

    // functions
    boolean embarkPiece(Node * source); // 1
    boolean disembarkPiece(int toDisembark, Node * destination); // 1
    boolean canMove(Node * destination); // 1
    boolean canKill(Piece * target); // 1
}
