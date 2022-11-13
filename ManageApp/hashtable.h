#ifndef HASHTABLE_H
#define HASHTABLE_H
#define Hash_Size 29;

#include<iostream>
using namespace std;

template <class TKey, class TValue> class HashTable{
private:
    TValue value;
    HashTable<TKey, TValue> *next;
public:
    HashTable();
    HashTable(const HashTable &obj);// copy construction
    ~HashTable();

    bool Add(const TKey &key, const TValue &value);// add new object to table
    const HashTable<TKey, TValue> &operator=(const HashTable<TKey, TValue> &obj);
    const HashTable<TKey, TValue> &operator[](const HashTable<TKey, TValue> &obj);
    void Remove(const TKey &key);
    void Clear();
};
HashTable<class TKey, class TValue>* hash_table[29];

#endif // HASHTABLE_H
