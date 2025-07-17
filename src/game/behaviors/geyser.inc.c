void bhv_geyser_interact(void){
    switch (o->oAction){
    case 0:
    if (obj_check_if_collided_with_object(o, gMarioObject) == 1 ) {
                if (gMarioState->action == ACT_FIRST_PERSON){
            set_camera_mode(gMarioState->area->camera, -1, 1);
        }
        cur_obj_play_sound_2(SOUND_OBJ_DIVING_IN_WATER);
        set_mario_action(gMarioState, ACT_TRIPLE_JUMP, 0);
        gMarioState->vel[1] = 90.0f;
        gMarioState->forwardVel = 20.0f;
    }
        cur_obj_play_sound_2(SOUND_OBJ_WALKING_WATER);
        spawn_mist_from_global();
        o->oTimer = 0;
        o->oAction = 1;
    break;
    case 1:
     if (o->oTimer > 15){
        cur_obj_scale_over_time(SCALE_AXIS_Y, 2, 0.1f, 0.2f);
        cur_obj_scale_over_time(SCALE_AXIS_X, 2, 0.1f, 0.3f);
        cur_obj_scale_over_time(SCALE_AXIS_Z, 2, 0.1f, 0.3f);
     }
    if (o->oTimer > 50){
    o->oAction = 0; 
        cur_obj_scale_over_time(SCALE_AXIS_Y, 2, 0.1f, 0.3f);
        cur_obj_scale_over_time(SCALE_AXIS_X, 2, 1, 1);
        cur_obj_scale_over_time(SCALE_AXIS_Z, 2, 1, 1);
    }
}
}
void bhv_geyser_loop(void){
    bhv_geyser_interact();
}