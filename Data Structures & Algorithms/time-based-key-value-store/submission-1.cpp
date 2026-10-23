class TimeMap {
public:
    map<pair<string,int>,string> store;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        this->store[{key,timestamp}]=value;
    }
    
    string get(string key, int timestamp) {
        string ans="";
        auto i = this->store.find({key, timestamp});
        if (i != this->store.end()) {
            ans = i->second;
        }
        else {
            for(auto it: this->store) {
                if(it.first.first==key && it.first.second<timestamp){
                    ans=it.second;
                }
            }
        }
        return ans;
    }
};

