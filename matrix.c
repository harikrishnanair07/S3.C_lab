#include<stdio.h>
#include<stdlib.h>
void add(int m[100][100], int n[100][100], int ds[100][100], int row, int col);
void sub(int m[100][100], int n[100][100], int ds[100][100],  int row, int col);
void mult(int m[100][100], int n[100][100], int ds[100][100], int row, int col);
void tran(int m[100][100], int ds[100][100], int row, int col);
void display(int mat[100][100], int row, int col);
int main()
{
    int a[100][100],b[100][100],rs[100][100],r,c,ch;
    printf("Enter size of matrix (rxc):");
    scanf("%d%d",&r,&c);
    printf("Input values to first matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Input value a%d%d :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input values to second matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Input value b%d%d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    operations:
    printf("Select operation for matrix\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        add(a, b, rs, r, c);
        printf("Sum of matrices:\n");
        display(rs, r, c);
        break;
        case 2:
        sub(a, b, rs, r, c);
        printf("Result of matrices:\n");
        display(rs, r, c);
        break;
        case 3:
        mult(a, b, rs, r, c);
        printf("Product of matrices:\n");
        display(rs, r, c);
        break;
        case 4:
        printf("Transpose of matrix a:\n");
        tran(a, rs, r, c);
        display(rs, r, c);
        printf("Transpose of matrix b:\n");
        tran(b, rs, r, c);
        display(rs, r, c);
        break;
        case 5:
        printf("Exiting program\n");
        exit(0);
        default:
        printf("Invalid input\n");
        goto operations;
    }
}
void add(int m[100][100], int n[100][100], int sum[100][100], int row, int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=m[i][j]+n[i][j];
        }
    }
}
void sub(int m[100][100], int n[100][100], int res[100][100],  int row, int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            res[i][j]=m[i][j]-n[i][j];
        }
    }
}
void mult(int m[100][100], int n[100][100], int prod[100][100], int row, int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            prod[i][j]=0;
            for(int k=0;k<col;k++){
                prod[i][j]+=m[i][k]*n[k][j];
            }
        }
    }
}
void tran(int m[100][100], int tra[100][100], int row, int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            tra[i][j]=m[j][i];
        }
    }
}
void display(int mat[100][100], int row, int col)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n\n");
    }
}