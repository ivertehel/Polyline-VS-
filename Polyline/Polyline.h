struct Pos{
    int x;
    int y;
};

struct Stack{
    Pos* stack;
    int n; // elements number
};

extern struct Stack initStack();
extern void push (Stack &stack, struct Pos pos);
extern Pos pop(Stack &stack);
extern void inputPolyline(Stack &stack);
extern void showPolyline(Stack stack);
extern void addSegment(Stack &stack, Pos pos);
extern double perimeter(Stack stack);