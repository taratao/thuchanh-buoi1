/*
Bài 3:
Cho cấu trúc dữ liệu đồ thị được khai báo sử dụng ma trận đỉnh - đỉnh như sau:
typedef struct {
    int A[100][100];
    int n;
} Graph;
Giả sử đồ thị vô hướng, không chứa khuyên, không chứa đa cung

Viết hàm int deg(Graph* G, int x) để tính bậc của đỉnh x.

*/

int deg(Graph *G, int x){
	int dg = 0;
	int i;
	for(i = 1; i <= G->n; i++){
		dg += G->A[x][i];
	}
	return dg;
}
