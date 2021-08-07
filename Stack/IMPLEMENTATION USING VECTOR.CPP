class Stack
{
private:
    vector<int> v;
public:
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    int isEmpty()
    {
        return v.empty();
    }
};
