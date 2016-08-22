void swap(int* a, int* b)
{
    auto dummy = *a;
    *a = *b;
    *b = dummy;
}
