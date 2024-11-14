#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximal.h"
#include "Weapon.h"

// Проверка базового функционала класса Transformer
TEST(TransformerTest, MoveTest) {
    Autobot autobot;
    EXPECT_TRUE(autobot.move());
}

// Проверка сравнения Transformers
TEST(TransformerTest, ComparisonTest) {
    Autobot autobot("Bumblebee", 5, 50, 100, 300, 25);
    Decepticon decepticon("Starscream", 5, 40, 100, 300, 25);
    EXPECT_TRUE(autobot > decepticon);
}

// Проверка вывода Transformer
TEST(TransformerTest, OutputTest) {
    Autobot autobot("Optimus Prime", 10, 100, 200, 500, 100);
    std::stringstream ss;
    ss << autobot;
    EXPECT_EQ(ss.str(), "Transformer: Optimus Prime, Level: 10, Strength: 100");
}

// Проверка функционала класса Weapon
TEST(WeaponTest, UseTest) {
    Weapon weapon("Blaster", 50);
    EXPECT_EQ(weapon.getType(), "Blaster");
    EXPECT_EQ(weapon.getDamage(), 50);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}