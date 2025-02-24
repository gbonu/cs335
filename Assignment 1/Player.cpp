#include "Player.hpp"

/**
         * @brief Constructs a Player with the given identifier.
         * @param name A const. string reference to be the player name
         * @param inventory A const ref. to an Inventory to copy and setup a Player's inventory_ member
         *      If none provided, default value of a default constructed Inventory
         */
        Player::Player(const std::string& name, const Inventory& inventory = Inventory()) : name_(name), inventory_(inventory){}

        /**
         * @brief Gets the name of the Player
         * @return The string value stored in name
         */
        std::string Player::getName() const{
          return name_;
        }

        /**
         * @brief Exposes a reference to interact with the Player's Inventory.
         * @return An reference to the Player's Inventory.
         * @note Since we allow modification to this reference, this function
         *  is NOT declared const.
         */
        Inventory& Player::getInventoryRef(){
          Inventory& ref = inventory_;
          return ref;
        }
        
       /**
         * @brief Copy constructor for the Player class.
         * @param rhs A const l-value ref. to the Player object to copy.
         * @post Creates a deep copy of `rhs`
         */
        Player::Player(const Player& rhs){

        }
        
         /**
         * @brief Move constructor for the Player class.
         * @param rhs An r-value ref. to a Player object to move from.
         * @post Transfers ownership of resources from `rhs`
         * to the newly constructed Player object *using move semantics*
         */
        Player::Player(Player&& rhs){

        }

        /**
         * @brief Copy assignment operator for the Player class.
         * @param rhs A const l-value ref. to the Player object to copy.
         * @return A reference to the updated Player object.
         * @post Performs a deep copy of `rhs`, including 
         * re-allocating and copying the Inventory and ID.
         */
        Player& Player::operator=(const Player& rhs){
          
        }

        /**
         * @brief Move assignment operator for the Player class.
         * @param rhs An r-value ref. to a Player object to move from.
         * @return A reference to the updated Player object.
         * @post Transfers ownership of member resources from `rhs` 
         * to the updated Player object *using move semantics*
         */
        Player& Player::operator=(Player&& rhs){

        }
        

        /**
         * @brief Destructor for the Player class
         *   Since we have no dynamic memory as private members,
         *   we rely on the default destructor
         */
        Player::~Player() = default;