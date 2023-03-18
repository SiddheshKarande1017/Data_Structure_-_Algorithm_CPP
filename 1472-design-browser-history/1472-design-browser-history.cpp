class BrowserHistory {
public:
    class node
    {
        public:
        string u;
        node *next,*prev;
        node(string url)
        {
            u=url;
            next=NULL;
            prev=NULL;
        }
        
    };
    node *head;
    node *cur;
    //node *
    BrowserHistory(string homepage) {
        head=new node(homepage);
        cur=head;
    }
    
    void visit(string url) {
        cur->next=new node(url);
        cur->next->prev=cur;
        cur=cur->next;
    }
    
    string back(int steps) {
        
        while(steps--)
        {
            if(cur==head) return cur->u;
            cur=cur->prev;
        }
        return cur->u;
        
    }
    
    string forward(int steps) {
        while(steps--)
        {
            if(cur->next==NULL) return cur->u;
            cur=cur->next;
        }
        return cur->u;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */