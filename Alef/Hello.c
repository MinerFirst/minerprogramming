(int, byte*, byte) 
func() 
{ 
    return (10, "hello", 'c'); 
}

void 
main() 
{
    int a; 
    byte* str; 
    byte c; 
    (a, str, c) = func(); 
}
