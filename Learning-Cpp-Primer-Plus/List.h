namespace Chapter10 {
    template<class T>
    class List {
    protected:
        struct Node {
            Node* pNext
                T* pt;
            Node() { pNext = NULL; pT = new T; }
            ~Node() { delete pT; }
        };
        Node* pFirst; //
    public:
        List();
        void Add(T& t);
        void Remove(T& t);
        T* Finf(T& t);
        void PrintList();
        ~List();
    };

}
