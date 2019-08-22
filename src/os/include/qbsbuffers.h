#ifndef QBSBUFFERS_H
    #define QBSBUFFERS_H

    #include "qtypes.h"

    typedef struct{
        volatile uint16_t head;
        volatile uint16_t tail;
        qSize_t length;
        volatile uint8_t *buffer;
    }qBSBuffer_t;

    qSize_t qBSBuffer_Count( const qBSBuffer_t * const obj );
    qBool_t qBSBuffer_IsFull( const qBSBuffer_t * const obj );
    qBool_t qBSBuffer_Empty( const qBSBuffer_t * const obj );
    uint8_t qBSBuffer_Peek( const qBSBuffer_t * const obj );

    qBool_t qBSBuffer_Get( qBSBuffer_t * const obj, uint8_t *dest );
    qBool_t qBSBuffer_Read( qBSBuffer_t * const obj, void *dest, const qSize_t n );
    qBool_t qBSBuffer_Put( qBSBuffer_t * const obj, const uint8_t data );
    void qBSBuffer_Init( qBSBuffer_t * const obj, volatile uint8_t *buffer, const qSize_t length );

#endif