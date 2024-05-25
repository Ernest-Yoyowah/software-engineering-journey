class Graph {
  private vertices: number;
  private adjacencyList: Map<number, number[]>;

  constructor(vertices: number) {
    this.vertices = vertices;
    this.adjacencyList = new Map<number, number[]>();
  }

  addEdge(vertex: number, edge: number) {
    if (!this.adjacencyList.has(vertex)) {
      this.adjacencyList.set(vertex, []);
    }
    this.adjacencyList.get(vertex)!.push(edge);
  }

  dfsUtil(vertex: number, visited: boolean[]) {
    visited[vertex] = true;
    console.log(vertex);

    let neighbors = this.adjacencyList.get(vertex)!;
    for (let i = 0; i < neighbors.length; i++) {
      let neighbor = neighbors[i];
      if (!visited[neighbor]) {
        this.dfsUtil(neighbor, visited);
      }
    }
  }

  dfs(startVertex: number) {
    let visited: boolean[] = [];
    for (let i = 0; i < this.vertices; i++) {
      visited[i] = false;
    }

    this.dfsUtil(startVertex, visited);
  }
}

// Example Usage:
let graph = new Graph(4);
graph.addEdge(0, 1);
graph.addEdge(0, 2);
graph.addEdge(1, 2);
graph.addEdge(2, 0);
graph.addEdge(2, 3);
graph.addEdge(3, 3);

console.log("Depth First Traversal:");
graph.dfs(3);
