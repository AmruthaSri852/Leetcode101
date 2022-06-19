// 787. Cheapest Flights Within K Stops


#define INF (INT_MAX>>2)

int findCheapestPrice(int n, int** flights, int flightsSize, int* flightsColSize, int src, int dst, int k){
    int *dist = malloc(n * sizeof(int));
    int *dist_temp = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
        dist_temp[i] = INF;
    }
        dist[src] = 0;
        dist_temp[src] = 0;
        while(k>=0)
    {
        for (int i = 0; i < flightsSize; i++)
        {
            int from = flights[i][0];
            int to = flights[i][1];
            int price = flights[i][2];

            if (dist_temp[to] > dist[from] + price)
            {
                dist_temp[to] = dist[from] + price;
            }
        }
        memcpy(&dist[0], &dist_temp[0], n * sizeof(int));
        k--;
    }
        int ret = dist[dst];
        if (ret == INF) return -1;
        return ret;
}

// Input: n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1
// Output: 700
    
// Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1
// Output: 200
    
// Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 0
// Output: 500
