#include "discord_rich_presence.h"
#include <Discord/discord_game_sdk.h>

static DiscordRichPresence presence;
static DiscordEventHandlers handlers;

void InitializeDiscordRichPresence() {
    DiscordCreateParams params;
    DiscordCreateParamsSetDefault(&params);

    params.client_id = "1131191350725988392";

    DiscordInitialize(&params, &handlers, 1, NULL);
}

void UpdateDiscordRichPresence(const std::string& state, const std::string& details, const std::string& largeImageKey) {
    DiscordRichPresence newPresence;
    DiscordRichPresenceClear(&newPresence);

    newPresence.state = state.c_str();
    newPresence.details = details.c_str();
    newPresence.large_image_key = largeImageKey.c_str();

    DiscordUpdatePresence(&newPresence);
}

void ShutdownDiscordRichPresence() {
    DiscordShutdown();
}