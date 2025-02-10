#include "Inventory.hpp"

/**
   

        /** 
         * @brief Retrieves the value stored in `equipped_`
         * @return The Item pointer stored in `equipped_`
         */
        Item* Inventory::getEquipped() const{
            return equipped_;
        }

        /**
         * @brief Equips a new item.
         * @param itemToEquip A pointer to the item to equip.
         * @post Updates `equipped` to the specified item 
         * without deallocating the original.
         */
        void Inventory::equip(Item* itemToEquip){
            equipped_ = itemToEquip;
        }

        /**
         * @brief Discards the currently equipped item.
         * @post Deallocates the item pointed to by `equipped` 
         * and sets `equipped` to nullptr, if `equipped` is not nullptr already.
         */
        void Inventory::discardEquipped(){
            //to-do
        }

        /** 
         * @brief Retrieves the value stored in `inventory_grid_`
         * @return The vector<vector<Item>> value stored in `inventory_grid_`
         */
        std::vector<std::vector<Item>> Inventory::getItems() const{
            return inventory_grid_;
        }

        /** 
         * @brief Retrieves the value stored in `weight_`
         * @return The float value stored in `weight_`
         */
        float Inventory::getWeight() const{
            return weight_;
        }

        /**
         * @brief Retrieves the value stored in `item_count_`
         * @return The size_t value stored in `item_count_`
         */
        size_t Inventory::getCount() const{
            return item_count_;
        }

        /**
         * @brief Retrieves the item located at the specified row and column
         * in the inventory grid.
         *
         * @param row A size_t parameter for the row index in the inventory grid.
         * @param col A size_t parameter for the column index in the inventory grid.
         * @return The item at the specified row and column.
         * @throws std::out_of_range If the row or column is out of bounds.
         */
        Item Inventory::at(const size_t& row, const size_t& col) const{
            if(row > inventory_grid_.size() || col > inventory_grid_[row].size()){
                throw std::out_of_range("invalid parameter");
            }
            return inventory_grid_[row][col];
        }

        /**
         * @brief Stores an item at the specified row and column in the inventory grid.
         *
         * @param row A size_t parameter for the row index in the inventory grid.
         * @param col  A size_t parameter for the column index in the inventory grid.
         * @param pickup A const ref. to the item to store at the specified location.
         * @return True if the item was successfully stored, false if the cell is already occupied.
         * 
         * @post Updates `item_count_` and `weight_` if the Item is sucessfully added
         * @throws std::out_of_range If the row or column is out of bounds.
         */
        bool Inventory::store(const size_t& row, const size_t& col, const Item& pickup){
            if(row > inventory_grid_.size() || col > inventory_grid_[row].size()){
                throw std::out_of_range("invalid parameter");
            }
            if(inventory_grid_[row][col].name_ == "" ){
                weight_ = weight_ - inventory_grid_[row][col].weight_ + pickup.weight_;
                inventory_grid_[row][col] = pickup;
                return true;
            }
            else{ //the cell is already occupied
                return false;  
            }
        }

        // Big Five

        /**
         * @brief Copy constructor for the Inventory class.
         * @param rhs A const l-value ref. to the Inventory object to copy.
         * @post Creates a deep copy of `rhs`, 
         *  including duplicating the dynamically 
         *  allocated item in `equipped`.
         */
        Inventory::Inventory(const Inventory& rhs){

        }

        /**
         * @brief Move constructor for the Inventory class.
         * @param rhs An r-value ref. to the Inventory object to move from.
         * @post Transfers ownership of resources from `rhs` 
         * to the newly constructed Inventory object. 
         * 
         * Sets `rhs` to a valid but empty state.
         * - All pointers are set to nullptr
         * - All numerical values are set to 0
         * - All containers are cleared to have size 0
         */
        Inventory::Inventory(Inventory&& rhs){

        }


        /**
         * @brief Copy assignment operator for the Inventory class.
         * @param rhs A const l-value ref. to the Inventory object to copy.
         * @return A reference to the updated Inventory object.
         * @post Performs a deep copy of `rhs`, including 
         * re-allocating and copying the item in `equipped`.
         * 
         * NOTE: The resources of the overridden object
         * should be destroyed.
         */
        Inventory& Inventory::operator=(const Inventory& rhs){
            
        }

        /**
         * @brief Move assignment operator for the Inventory class.
         * @param rhs An r-value ref. to the Inventory object to move from.
         * @return A reference to the updated Inventory object.
         * @post Transfers ownership of resources from `rhs` 
         * to the newly constructed Inventory object. 
         * 
         * Sets `rhs` to a valid but empty state.
         * - All pointers are set to nullptr
         * - All numerical values are set to 0
         * - All containers are cleared to have size 0
         * 
         * NOTE: The resources of the overridden object
         * should be destroyed.
         */
        Inventory& Inventory::operator=(Inventory&& rhs){

        }

        /**
         * @brief Destructor for the Inventory class.
         * @post Deallocates any dynamically allocated resources.
         */
        Inventory::~Inventory(){
            
        }

