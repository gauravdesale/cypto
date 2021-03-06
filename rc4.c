// Key Scheduling Algorithm 
// Input: state - the state used to generate the keystream
//        key - Key to use to initialize the state 
//        len - length of key in bytes  
void ksa(unsigned char state[], unsigned char key[], int len)
{
   int i,j=0,t; 
   
   for (i=0; i < 256; ++i)
      state[i] = i; 
   for (i=0; i < 256; ++i) {
      j = (j + state[i] + key[i % len]) % 256;//this is the jumbling algorithm that produces the set j by taking the sum of the state key element mod length and 256 
      t = state[i]; 
      state[i] = state[j]; //exchange the values of state i and state j which are elements at two different locations
      state[j] = t; 
   }   
}

// Pseudo-Random Generator Algorithm 
// Input: state - the state used to generate the keystream 
//        out - Must be of at least "len" length
//        len - number of bytes to generate 
void prga(unsigned char state[], unsigned char out[], int len)
{  
   int i=0,j=0,x,t; 
   unsigned char key; 
   
   for (x=0; x < len; ++x)  {
      i = (i + 1) % 256; //iterate the i by the +1 and 256
      j = (j + state[i]) % 256; //now we are setting the values of i and j 
      t = state[i]; 
      state[i] = state[j]; //go through the exchange again
      state[j] = t; 
      out[x] = state[(state[i] + state[j]) % 256];//this is the output
   }   
}  
