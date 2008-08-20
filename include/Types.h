/**
 * Some definition of types.
 * This header is included by Common.h and every class header file should include Common.h.
 */

#ifndef ZSDX_TYPES_H
#define ZSDX_TYPES_H

/**
 * Types of the id of each resource.
 */
typedef Uint32 MapId;
typedef Uint32 TilesetId;
typedef std::string MusicId;
typedef std::string SoundId;
typedef std::string SpriteAnimationsId;

/**
 * Messages.
 */
typedef std::string MessageId;

/**
 * Declaration of all classes to avoid dependencies between the header files.
 */

// main classes
class ZSDX;
class Screen;
class GameResource;
class KeysEffect;
class FileTools;
class Random;

// menus
class TitleScreen;
class SelectionMenuPhase;
class SelectionMenuCommon;
class SelectionMenuEraseFile;
class SelectionMenuConfirmErase;
class SelectionMenuChooseName;
class SelectionMenuChooseMode;

// game
class Game;
class Savegame;
class Equipment;
class Map;
class MapLoader;
class DialogBox;
class Message;

// music and sound
class Music;
class Sound;

// graphics
class TextDisplayed;

// HUD
class HUD;
class HudElement;
class ActionIcon;
class SwordIcon;
class PauseIcon;
class CounterView;
class HeartsView;
class RupeesView;
class MagicBar;

// sprites
class Sprite;
class SpriteAnimations;
class SpriteAnimation;
class SpriteAnimationDirection;
class AnimationListener;

// transition effects
class TransitionEffect;
class TransitionFade;
class TransitionImmediate;

// map entities
class MapEntities;
class MapEntity;
class Link;
class TileOnMap;
class EntityDetector;
class MapEntrance;
class MapExit;
class PickableItem;
class PickableItemHeart;
class PickableItemFairy;
class CarriedItem;
class TransportableItem;

// tiles
class Tileset;
class Tile;
class SimpleTile;
class AnimatedTile;

// movements
class Movement;
class MovementWithCollision;
class MovementWithSmoothCollision;
class Movement8ByPlayer;
class MovementFalling;
class MovementPath;
class FairyMovement;
class FollowMovement;
class ThrowItemMovement;



#endif
