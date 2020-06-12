class RandomizedSet {
public:
    unordered_map<int, int> valuesMap;
    vector<int> values;

    RandomizedSet() {
    }

    bool insert(int val) {
        if (valuesMap.find(val) != valuesMap.end()) return false;
        valuesMap[val] = values.size();
        values.push_back(val);
        return true;
    }

    bool remove(int val) {
        unordered_map<int, int>::iterator it = valuesMap.find(val);
        if (it == valuesMap.end()) return false;
        int idx = it->second;
        valuesMap.erase(it);

        int end = values.size() - 1;
        if (idx != end) valuesMap[values[end]] = idx;
        swap(values[idx], values[end]);
        values.pop_back();
        return true;
    }

    int getRandom() {

        int end = values.size();

        int r = rand() % end;

        return values[r];
    }

};