class ProductOfNumbers {
public:
    vector<int> nums;
    ProductOfNumbers() {}

    void add(int num) { nums.push_back(num); }

    int getProduct(int k) {
        int productOfk = 1;
        int n = nums.size();
        for (int i = n - 1; i >= n - k; i--) {
            productOfk *= nums[i];
        }
        return productOfk;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */