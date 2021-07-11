#ifndef _ARRAY_HPP
#define _ARRAY_HPP

class Array
{
    private:
// data memeber
        int *A;
        int length;
        int size;
        void Swap(int *x, int *y){}// this function only asscesible to the  class members of member function
 // here can be some private function for internally use.
    public:
 //constructors

        Array();
        Array(int l,int s );
        Array(Array &source);
        Array& operator=(const Array &sourse);

// *** functionality on array ********
/*Done*/ void feed(); 
/*Done*/ int get_length(){return length;}
/*Done*/ int get_size(){return size;}
/*Done*/ void Append(int);
/*Done*/ void insert(int ,int);     // insert at the given index element
         void Delete(int);          // delete the given index element
        int  search(int);          // search the given key and return index if found or return -1;
        void reverse();            // reverse the array  
        void Union(Array* s);      // union of two array 
        void Intersection(Array);  // intersection of two array
/*Done*/int Max();         // for finding minimun element of an array
/*Done*/int Min();         // for finding the minimum element in the list
/*Done*/void Display();    // print all the element of an array
        int get_at_index(int);     // assecess the element at a given index.
        void set_at_index(int ,int);    // assigning new value at agiven index.
        int sum();                 // sum of all element of an array
        int average();             // average of all the element of an array
        void left_shift();         // means delete the first element 
        void left_rotate(int);     // rotation of an elements of arrays  by k position in left(clock wise direction)
        void right_shift();        // shift all element to the one step right and assign zero at index 0;  
        void right_rotate(int);    // rotation of an elements of arrays  by k position in right(counter-clock wise direction)
        void insert_in_sorted(int);
        void Arrange_Negative_to_left();
        bool check_sorted();       // return true or false depending upon any given array is sorted or not
 
 
// destructor   
~Array();
};
#endif // ARRAY_HPP
