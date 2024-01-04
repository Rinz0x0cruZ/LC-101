
class Solution {
    Map<Integer, Node> map = new HashMap<>();

    public Node cloneGraph(Node node) {
        if (node == null) return null;
        return clone(node);
    }

    private Node clone(Node node) {
        if (map.containsKey(node.val)) {
            return map.get(node.val);
        }

        Node newNode = new Node(node.val);
        map.put(node.val, newNode);

        for (Node neighbor : node.neighbors) {
            newNode.neighbors.add(clone(neighbor));
        }

        return newNode;
    }
}
