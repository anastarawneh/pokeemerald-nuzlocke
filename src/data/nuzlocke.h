#include "constants/region_map_sections.h"

static const u16 gEncounterFlagsTable[] = {
    [MAPSEC_LITTLEROOT_TOWN] = FLAG_ENCOUNTERED_LITTLEROOT_TOWN,
    [MAPSEC_OLDALE_TOWN] = FLAG_ENCOUNTERED_OLDALE_TOWN,
    [MAPSEC_DEWFORD_TOWN] = FLAG_ENCOUNTERED_DEWFORD_TOWN,
    [MAPSEC_LAVARIDGE_TOWN] = FLAG_ENCOUNTERED_LAVARIDGE_TOWN,
    [MAPSEC_FALLARBOR_TOWN] = FLAG_ENCOUNTERED_FALLARBOR_TOWN,
    [MAPSEC_VERDANTURF_TOWN] = FLAG_ENCOUNTERED_VERDANTURF_TOWN,
    [MAPSEC_PACIFIDLOG_TOWN] = FLAG_ENCOUNTERED_PACIFIDLOG_TOWN,
    [MAPSEC_PETALBURG_CITY] = FLAG_ENCOUNTERED_PETALBURG_CITY,
    [MAPSEC_SLATEPORT_CITY] = FLAG_ENCOUNTERED_SLATEPORT_CITY,
    [MAPSEC_MAUVILLE_CITY] = FLAG_ENCOUNTERED_MAUVILLE_CITY,
    [MAPSEC_RUSTBORO_CITY] = FLAG_ENCOUNTERED_RUSTBORO_CITY,
    [MAPSEC_FORTREE_CITY] = FLAG_ENCOUNTERED_FORTREE_CITY,
    [MAPSEC_LILYCOVE_CITY] = FLAG_ENCOUNTERED_LILYCOVE_CITY,
    [MAPSEC_MOSSDEEP_CITY] = FLAG_ENCOUNTERED_MOSSDEEP_CITY,
    [MAPSEC_SOOTOPOLIS_CITY] = FLAG_ENCOUNTERED_SOOTOPOLIS_CITY,
    [MAPSEC_EVER_GRANDE_CITY] = FLAG_ENCOUNTERED_EVER_GRANDE_CITY,
    [MAPSEC_ROUTE_101] = FLAG_ENCOUNTERED_ROUTE_101,
    [MAPSEC_ROUTE_102] = FLAG_ENCOUNTERED_ROUTE_102,
    [MAPSEC_ROUTE_103] = FLAG_ENCOUNTERED_ROUTE_103,
    [MAPSEC_ROUTE_104] = FLAG_ENCOUNTERED_ROUTE_104,
    [MAPSEC_ROUTE_105] = FLAG_ENCOUNTERED_ROUTE_105,
    [MAPSEC_ROUTE_106] = FLAG_ENCOUNTERED_ROUTE_106,
    [MAPSEC_ROUTE_107] = FLAG_ENCOUNTERED_ROUTE_107,
    [MAPSEC_ROUTE_108] = FLAG_ENCOUNTERED_ROUTE_108,
    [MAPSEC_ROUTE_109] = FLAG_ENCOUNTERED_ROUTE_109,
    [MAPSEC_ROUTE_110] = FLAG_ENCOUNTERED_ROUTE_110,
    [MAPSEC_ROUTE_111] = FLAG_ENCOUNTERED_ROUTE_111,
    [MAPSEC_ROUTE_112] = FLAG_ENCOUNTERED_ROUTE_112,
    [MAPSEC_ROUTE_113] = FLAG_ENCOUNTERED_ROUTE_113,
    [MAPSEC_ROUTE_114] = FLAG_ENCOUNTERED_ROUTE_114,
    [MAPSEC_ROUTE_115] = FLAG_ENCOUNTERED_ROUTE_115,
    [MAPSEC_ROUTE_116] = FLAG_ENCOUNTERED_ROUTE_116,
    [MAPSEC_ROUTE_117] = FLAG_ENCOUNTERED_ROUTE_117,
    [MAPSEC_ROUTE_118] = FLAG_ENCOUNTERED_ROUTE_118,
    [MAPSEC_ROUTE_119] = FLAG_ENCOUNTERED_ROUTE_119,
    [MAPSEC_ROUTE_120] = FLAG_ENCOUNTERED_ROUTE_120,
    [MAPSEC_ROUTE_121] = FLAG_ENCOUNTERED_ROUTE_121,
    [MAPSEC_ROUTE_122] = FLAG_ENCOUNTERED_ROUTE_122,
    [MAPSEC_ROUTE_123] = FLAG_ENCOUNTERED_ROUTE_123,
    [MAPSEC_ROUTE_124] = FLAG_ENCOUNTERED_ROUTE_124,
    [MAPSEC_ROUTE_125] = FLAG_ENCOUNTERED_ROUTE_125,
    [MAPSEC_ROUTE_126] = FLAG_ENCOUNTERED_ROUTE_126,
    [MAPSEC_ROUTE_127] = FLAG_ENCOUNTERED_ROUTE_127,
    [MAPSEC_ROUTE_128] = FLAG_ENCOUNTERED_ROUTE_128,
    [MAPSEC_ROUTE_129] = FLAG_ENCOUNTERED_ROUTE_129,
    [MAPSEC_ROUTE_130] = FLAG_ENCOUNTERED_ROUTE_130,
    [MAPSEC_ROUTE_131] = FLAG_ENCOUNTERED_ROUTE_131,
    [MAPSEC_ROUTE_132] = FLAG_ENCOUNTERED_ROUTE_132,
    [MAPSEC_ROUTE_133] = FLAG_ENCOUNTERED_ROUTE_133,
    [MAPSEC_ROUTE_134] = FLAG_ENCOUNTERED_ROUTE_134,
    [MAPSEC_UNDERWATER_124] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_UNDERWATER_126] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_UNDERWATER_127] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_UNDERWATER_128] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_UNDERWATER_SOOTOPOLIS] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_GRANITE_CAVE] = FLAG_ENCOUNTERED_GRANITE_CAVE,
    [MAPSEC_MT_CHIMNEY] = FLAG_ENCOUNTERED_MT_CHIMNEY,
    [MAPSEC_SAFARI_ZONE] = FLAG_ENCOUNTERED_SAFARI_ZONE,
    [MAPSEC_BATTLE_FRONTIER] = FLAG_ENCOUNTERED_BATTLE_FRONTIER,
    [MAPSEC_PETALBURG_WOODS] = FLAG_ENCOUNTERED_PETALBURG_WOODS,
    [MAPSEC_RUSTURF_TUNNEL] = FLAG_ENCOUNTERED_RUSTURF_TUNNEL,
    [MAPSEC_ABANDONED_SHIP] = FLAG_ENCOUNTERED_ABANDONED_SHIP,
    [MAPSEC_NEW_MAUVILLE] = FLAG_ENCOUNTERED_NEW_MAUVILLE,
    [MAPSEC_METEOR_FALLS] = FLAG_ENCOUNTERED_METEOR_FALLS,
    [MAPSEC_METEOR_FALLS2] = FLAG_ENCOUNTERED_METEOR_FALLS,
    [MAPSEC_MT_PYRE] = FLAG_ENCOUNTERED_MT_PYRE,
    [MAPSEC_AQUA_HIDEOUT_OLD] = FLAG_ENCOUNTERED_AQUA_HIDEOUT,
    [MAPSEC_SHOAL_CAVE] = FLAG_ENCOUNTERED_SHOAL_CAVE,
    [MAPSEC_SEAFLOOR_CAVERN] = FLAG_ENCOUNTERED_SEAFLOOR_CAVERN,
    [MAPSEC_UNDERWATER_SEAFLOOR_CAVERN] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_VICTORY_ROAD] = FLAG_ENCOUNTERED_VICTORY_ROAD,
    [MAPSEC_MIRAGE_ISLAND] = FLAG_ENCOUNTERED_MIRAGE_ISLAND,
    [MAPSEC_CAVE_OF_ORIGIN] = FLAG_ENCOUNTERED_CAVE_OF_ORIGIN,
    [MAPSEC_SOUTHERN_ISLAND] = FLAG_ENCOUNTERED_SOUTHERN_ISLAND,
    [MAPSEC_FIERY_PATH] = FLAG_ENCOUNTERED_FIERY_PATH,
    [MAPSEC_FIERY_PATH2] = FLAG_ENCOUNTERED_FIERY_PATH,
    [MAPSEC_JAGGED_PASS] = FLAG_ENCOUNTERED_JAGGED_PASS,
    [MAPSEC_JAGGED_PASS2] = FLAG_ENCOUNTERED_JAGGED_PASS,
    [MAPSEC_SEALED_CHAMBER] = FLAG_ENCOUNTERED_SEALED_CHAMBER,
    [MAPSEC_UNDERWATER_SEALED_CHAMBER] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_SCORCHED_SLAB] = FLAG_ENCOUNTERED_SCORCHED_SLAB,
    [MAPSEC_ISLAND_CAVE] = FLAG_ENCOUNTERED_ISLAND_CAVE,
    [MAPSEC_DESERT_RUINS] = FLAG_ENCOUNTERED_DESERT_RUINS,
    [MAPSEC_ANCIENT_TOMB] = FLAG_ENCOUNTERED_ANCIENT_TOMB,
    [MAPSEC_SKY_PILLAR] = FLAG_ENCOUNTERED_SKY_PILLAR,
    [MAPSEC_SECRET_BASE] = FLAG_ENCOUNTERED_SECRET_BASE,
    [MAPSEC_AQUA_HIDEOUT] = FLAG_ENCOUNTERED_AQUA_HIDEOUT,
    [MAPSEC_MAGMA_HIDEOUT] = FLAG_ENCOUNTERED_MAGMA_HIDEOUT,
    [MAPSEC_MIRAGE_TOWER] = FLAG_ENCOUNTERED_MIRAGE_TOWER,
    [MAPSEC_BIRTH_ISLAND] = FLAG_ENCOUNTERED_BIRTH_ISLAND,
    [MAPSEC_FARAWAY_ISLAND] = FLAG_ENCOUNTERED_FARAWAY_ISLAND,
    [MAPSEC_ARTISAN_CAVE] = FLAG_ENCOUNTERED_ARTISAN_CAVE,
    [MAPSEC_MARINE_CAVE] = FLAG_ENCOUNTERED_MARINE_CAVE,
    [MAPSEC_UNDERWATER_MARINE_CAVE] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_TERRA_CAVE] = FLAG_ENCOUNTERED_TERRA_CAVE,
    [MAPSEC_UNDERWATER_105] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_UNDERWATER_125] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_UNDERWATER_129] = FLAG_ENCOUNTERED_UNDERWATER,
    [MAPSEC_DESERT_UNDERPASS] = FLAG_ENCOUNTERED_DESERT_UNDERPASS,
    [MAPSEC_ALTERING_CAVE] = FLAG_ENCOUNTERED_ALTERING_CAVE,
    [MAPSEC_NAVEL_ROCK] = FLAG_ENCOUNTERED_NAVEL_ROCK,
    [MAPSEC_TRAINER_HILL] = FLAG_ENCOUNTERED_TRAINER_HILL
};