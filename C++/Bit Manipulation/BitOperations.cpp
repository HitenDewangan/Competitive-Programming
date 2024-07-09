#include<iostream>
#include<limits>  // for numeric_limits
using namespace std;

//===================================================================================================
// Function to get the bit at the
// ith position
bool getBit(int num, int i)
{   
    // // Check for valid position within the integer size
    // int max_bit_position = numeric_limits<int>::digits - 1;
    // if (i < 0 || i > max_bit_position) {
    //     cerr << "Error: Invalid bit position. Must be between 0 and " << max_bit_position << endl;
    //     return false; // Or throw an exception
    // }
	// Return true if the bit is set. Otherwise return false
	return ((num & (1 << i)) != 0);
}
//===================================================================================================
// Function to set the ith bit of the
// given number num
int setBit(int num, int i)
{
	// Sets the ith bit and return
	// the updated value
	return num | (1 << i);
}

//===================================================================================
// Function to clear the ith bit of
// the given number num
int clearBit(int num, int i)
{

	// Create the mask for the ith
	// bit unset
	int mask = ~(1 << i);

	// Return the updated value
	return num & mask;
}

//===================================================================================
// Function to update the ith bit of
// the given number num
int updateBit(int num, int i, bool bit) // bit o set at ith position
{
    // If the bit is 1
    if (bit)
        return setBit(num, i);
    // If the bit is 0
    else
        return clearBit(num, i);
}


//===================================================================================
int main(){

    int num = 9;
    int i = 3;
    cout<<getBit(9,3)<<endl;   //output: 1
    cout<<setBit(9,1)<<endl;   //output: 11
    cout<<clearBit(9,3)<<endl; //output: 1
    cout<<updateBit(9,0,0);    //output: 13

}


/*Notes: ===========================================================================
set means 1
unset means 0   

getBit(num,i) = (num & (1 << i)) != 0

setBit(num,i) = (num | (1 << i))

clearBit(num,i) = (num & ~(1 << i))

toggleBit(num,i) = (num ^ (1 << i))

countSetBits(num) = __builtin_popcount(num)

countTrailingZeros(num) = __builtin_ctz(num)

countLeadingZeros(num) = __builtin_clz(num)

reverseBits(num) = __builtin_bswap32(num)

swapBits(num,i,j) = (num ^ ((1 << i) | (1 << j)))

swapNibbles(num) = (num << 4) | (num >> 4)

swapBytes(num) = (num << 24) | ((num << 8) & 0x00FF0000) | ((num >> 8) & 0x0000FF00) | (num >> 24)

swapHalfWords(num) = (num << 16) | (num >> 16)

swapWords(num) = (num << 32) | (num >> 32)


*/