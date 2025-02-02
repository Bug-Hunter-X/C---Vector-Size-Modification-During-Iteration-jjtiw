std::vector<int> vec; // ... some operations on vec ... 
// Safe approach 1: Iterate using iterators
for (auto it = vec.begin(); it != vec.end(); ) { 
if (/* condition to remove element */) { 
it = vec.erase(it); // erase returns an iterator to the next element
} else { 
++it; 
} }
// Safe approach 2: Iterate backwards
for (int i = vec.size() - 1; i >= 0; --i) {
if (/* condition to remove element */) {
vec.erase(vec.begin() + i);
}
}
// Safe approach 3: Create a copy or use a separate index
std::vector<int> vec_copy = vec; // Copy the vector
for (size_t i = 0; i < vec_copy.size(); ++i) {
if (/* condition to remove element */) {
//Modify vec
}
}
//Safe approach 4: Use a while loop with manual index incrementation.
size_t i = 0;
while (i < vec.size()){
if (/*condition*/){
vec.erase(vec.begin()+i); //Note index should not be incremented here.
}else{
++i;
}
}