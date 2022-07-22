class LRUCache {
public:

    int capaci;
    //list store the pair of(key->value)
    list<pair<int,int>> li;
    
    //umap store the key->pair<  ,value>
    unordered_map<int,list<pair<int,int>>::iterator> umap;
    
    
    LRUCache(int capacity) {
        capaci=capacity;
    }
    
    int get(int key) {
        
        //if key could not find them retuen -1;
        if(umap.find(key)==umap.end())
            return -1;
        
        li.splice(li.begin(),li,umap[key]);
        
        return umap[key]->second;
        
    }
    
    void put(int key, int value) {
        
        if(get(key)!= -1){
            umap[key]->second=value;
            return;
        }
        
        if(umap.size()==capaci){
            
            int deletedKey=li.back().first;
            li.pop_back();
            umap.erase(deletedKey);
            
        }
        
        li.push_front({key,value});
        umap[key]=li.begin();
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */