class MedianFinder {
public:
    //vector<int> ans;
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int> > minheap;
    int i=0;
    MedianFinder() {
        
    }
    void addNum(int num) {
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        if(minheap.size()>maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        double res=0;
        if(maxheap.size()>minheap.size())
        {
            res=maxheap.top();
        }
        else{
            res=(maxheap.top()+minheap.top())/2.0;
        }
        return res;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */