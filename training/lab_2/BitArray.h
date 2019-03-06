// i |= 1 << 3;
// i &= ~(1<<3);
// if (i & (1<<3))

// class BoolVector
//     {
//     BoolVector(){wsk = nullptr;}
//     int* wsk; //tablica zmiennych int
//     void set_array_size(bool* bool_variables, int size)
//         {
//         if(wsk)
//             delete[] wsk;
//         wsk = new int[size/sizeof(int)+1];
//         for(int i=0; i<size; i++)
//             for(int j=0; j<sizeof(int); j++)
//                 wsk[i] = ... //TU NALEŻY JAKOŚ ZAPISA zmienne typu bool
//         }
//     bool get_bool(int i)
//         {
//         int help_var = 0;
//         help_var = wsk[i/sizeof(int)]

//         return ...  //co/jak zwrócić...
//         }
// };