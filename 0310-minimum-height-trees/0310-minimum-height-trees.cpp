class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // Create adjacency list
        for(const auto connection : edges){
            mGraph[connection[0]].push_back(connection[1]);
            ++mInDegreeCount[connection[0]];

            mGraph[connection[1]].push_back(connection[0]);
            ++mInDegreeCount[connection[1]];
        }

        // Push all leaves into the queue
        std::queue<int> nodeQueue;
        for(const auto [node, indegree] : mInDegreeCount){
            if(indegree == 1){
                nodeQueue.push(node);
            }
        }

        // Trim out leaves layer by layer until we reach the core/center of the graph (see write-up for pic):
        // As we trim leaves, the next 'non-leaves' become leaves.
        // The process will terminate at the centroids.

        // Trim the leaves until only two nodes are left in the graph:
        int currentTreeSize = n;
        while(currentTreeSize > 2){
            int levelSize = nodeQueue.size();
            currentTreeSize -= levelSize; // Trim (or rather, the nodes will be trimmed now)
            for(int i = 0; i < levelSize; ++i){
                auto node = nodeQueue.front(); nodeQueue.pop();
                for(const auto connection : mGraph[node]){
                    --mInDegreeCount[connection]; // 'in-degree' count reduces, since we are trimming 'node', so all of 'nodes' connections subtract one 'in-degree' count.
                    if(mInDegreeCount[connection] == 1){
                        // Add new 'leaf nodes' (in-degree == 1) into the queue:
                        nodeQueue.push(connection);
                    }
                }                                
            }                                    
        }

        // The remaining leaves are the centroids, which are the 'minimum heights'
        std::vector<int> result;
        while(!nodeQueue.empty()){
            result.push_back(nodeQueue.front()); nodeQueue.pop();
        }

        return !result.empty() ? result : std::vector<int>{0};

    }
    std::unordered_map<int, std::vector<int>> mGraph;
    std::unordered_map<int, int> mInDegreeCount;
};