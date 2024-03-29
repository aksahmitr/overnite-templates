int parent[1000000];
int sizeDSU[1000000];

void make_set(int v) {
    parent[v] = v;
    sizeDSU[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sizeDSU[a] < sizeDSU[b])
            swap(a, b);
        parent[b] = a;
        sizeDSU[a] += sizeDSU[b];
    }
}