class Node {
public:
    Piece getPiece(); // 1
    int index;
    void addPiece(Piece toAdd); // 0
    boolean isAdjacent(node * toTest); // 0
    Node();
private:
    Piece * piece;
    Piece Node::getPiece() {
	return piece;
    }
    boolean Node::isAdjacent(node * toTest) {
	
};
