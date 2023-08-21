#include <iostream>
#include <stdio.h>

using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

// struct Array
// {
//     int A[10];
//     int size;
//     int length;
// };

void Display(struct Array arr)
{
    int i;
    cout << "Elements are " << endl;
    for (i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

int Delete(struct Array *arr, int index)
{
    int x = 0, i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[0];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int binarySearch(struct Array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key = arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int rBinarySearch(int a[], int l, int h, int key)
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return rBinarySearch(a, l, mid - 1, key);
        }
        else
        {
            return rBinarySearch(a, mid + 1, h, key);
        }
    }

    return -1;
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index << arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

int Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
}

int Total(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        s += arr.A[i];
    }
}

float Avg(struct Array arr)
{
    return (float)Total(arr) / arr.length;
}

void Reverse1(struct Array *arr)
{
    int *B;
    int i, j;
    B = new int[arr->length];

    for (i = arr->length - 2, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void insertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
    {
        return;
    }
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr->A[i], arr->A[j]);
        }
    }
}

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr1->A[j];
    }

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}

struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr1->A[j];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else if (arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main()
{
    // struct Array arr;
    // int n, i;

    // cout << "Enter size of an array." << endl;
    // scanf("%d", &arr.size);
    // arr.A = new int[arr.size];
    // arr.length = 0;

    // cout << "Enter how many number?" << endl;
    // cin >> n;

    // cout << "Enter all elements." << endl;
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr.A[i]);
    // }
    // arr.length = n;

    // Append(&arr, 10);
    // Insert(&arr, 5, 10);
    // cout << Delete(&arr, 0) << endl;
    // cout << linearSearch(&arr, 4) << endl;
    // cout << binarySearch(arr, 5) << endl;

    // Display(arr);

    // struct Array arr1 = {{2, 8, 10, 15, 25}, 10, 5};
    // struct Array arr2 = {{3, 8, 7, 15, 20}, 10, 5};
    // struct Array *arr3;

    // arr3 = Merge(&arr1, &arr2);
    // arr3 = Union(&arr1, &arr2);
    // arr3 = Intersection(&arr1, &arr2);
    // arr3 = Difference(&arr1, &arr2);

    // Display(*arr3);

    // MENU DRIVEN ARRAY
    struct Array arr1;
    int ch;
    int x, index;

    cout << "Enter size of an array." << endl;
    scanf("%d", &arr1.size);
    arr1.A = new int[arr1.size];

    cout << "Menu\n";
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Search" << endl;
    cout << "4. Sum" << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit" << endl;

    cout << "Enter your choice" << endl;
    printf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter an element and index");
        scanf("%d%d", &x, &index);
        Insert(&arr1, index, x);
        break;

    case 2:
        printf("Enter index ");
        scanf("%d", &index);
        x = Delete(&arr1, index);
        printf("Deleted Element is %d\n", x);
        break;

    case 3:
        printf("Enter element to search ");
        scanf("%d", &x);
        index = linearSearch(&arr1, x);
        printf("Element index %d", index);
        break;

    case 4:
        printf("Sum is %d\n", Total(arr1));
        break;

    case 5:
        Display(arr1);
    }

    return 0;
}