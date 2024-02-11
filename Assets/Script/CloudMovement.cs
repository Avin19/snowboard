using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudMovement : MonoBehaviour
{
    [Header("Points")]
    [SerializeField] private Transform startPoint , endPoint;

    private float speed ;

    private void Start()
    {
        speed = Random.Range(5f,5f);
        transform.position = new Vector3(Random.Range(startPoint.position.x , endPoint.position.x), 0f, 0f);
    }
    private void Update() {
        if(speed > 0 )
        {
            transform.position += new Vector3(1f,0f,0f) *speed *Time.deltaTime;
        }
        else
        {
              transform.position -= new Vector3(1f,0f,0f) *speed *Time.deltaTime;
        }
    }
}
