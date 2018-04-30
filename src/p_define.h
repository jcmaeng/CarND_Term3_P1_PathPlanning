#define NUM_PATH_POINTS     (50)
#define SPEED_LIMIT     (49.3)    // mph
#define TIME_INTERVAL   (0.02)

#define MPS_TO_MPH (0.2236936) // 1 m/s = 0.2236936 mph
#define MPH_TO_MPS (0.44704) // 1 mph = 0.44704 m/s
#define SPEED_STEP (1.0 * MPS_TO_MPH) // [m/s]
#define SAFE_DISTANCE (25.0) // safe distance to front/rear car
#define SPLINE_TARGET_X (25.0) // break up x-distance of spline

#define SF_ID  0
#define SF_X   1
#define SF_Y   2
#define SF_VX  3
#define SF_VY  4
#define SF_S   5
#define SF_D   6